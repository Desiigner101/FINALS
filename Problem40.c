/*
Author: SARSONAS, KERVIN GINO M.
Description: Problem 40
Date: Nov. 30, 2023
Version: 1.0
*/
#include <stdio.h>

void intro();
void receipts();
void Payrolls();
void getname();
float getsales();
float getbonus();
float commission(float);
void WithHoldingTax(float, float, float);
float FedwithHolding(float);
float StateWithHolding(float);
float Retirement(float);
float Totalization(float, float, float, float);

// HEART
int main(){
    Payrolls();
    return 0;
}

// Solution Rates (Federal, State, Retirement)
float commission(float sales){
    float commission = sales * 0.125;
    return commission;
}
float totalEarnings(float commission, float bonus){
    return commission + bonus;
}

// WITHHOLDING TAXES A, B, C

float FedwithHolding(float totalEarnings){
    return totalEarnings * 0.25;
}

float StateWithHolding(float totalEarnings){
    return totalEarnings * 0.10;
}

float Retirement(float totalEarnings){
    return totalEarnings * 0.08;
}



// CallCenter
void Payrolls(){
    float sales, bonus, Comms, earnings;
    float federal, state, retirement, netearnings;
    char name[30];

    intro();
    getname(name);
    sales = getsales();
    bonus = getbonus();
    Comms = commission(sales);
    earnings = totalEarnings(Comms, bonus);
    receipts();
    printf("Employee name:\t\t: %s\n", name);
    printf("Sales\t\t\t: %.2f\n", sales);
    printf("Bonus\t\t\t: %.2f\n", bonus);
    printf("Commission\t\t: %.2f\n", Comms);
    printf("Total Earnings\t\t: %.2f\n", earnings);

    federal = FedwithHolding(earnings);
    state = StateWithHolding(earnings);
    retirement = Retirement(earnings);
    WithHoldingTax(federal, state, retirement);
    netearnings = Totalization(earnings, federal, state, retirement);
    printf("\nTotal Net Earnings\t: %.2f", netearnings);

}

void intro(){
    printf("-------------------------------------\n");
    printf("\t  ARCTIC ICE COMPANY\n");
    printf("-------------------------------------\n");
}

void getname(char name[]) {
    printf("Enter employee name\t:  ");
    scanf(" %s", name);
}

float getsales(){
    float sales;
    printf("Enter sales\t\t:  ");
    scanf("%f", &sales);
    return sales;
}

float getbonus(){
    float bonus;
    printf("Enter bonus\t\t:  ");
    scanf("%f", &bonus);
    return bonus;
}

void receipts(){
    printf("-------------------------------------\n");
    printf("\t      Payrolls\n");
    printf("-------------------------------------\n");
}

void WithHoldingTax(float federal, float state, float retirement){
    printf  ("\nFederal Withholding:\t: %.2f\n", federal);
    printf("State Withholding:\t: %.2f\n", state);
    printf("Retirement Plan\t        : %.2f\n", retirement); 
}

float Totalization(float totalEarnings, float federal, float state, float retirement){
    float totalNetEarnings;

    totalNetEarnings = totalEarnings - (federal + state + retirement);
    return totalNetEarnings;
}