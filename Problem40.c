#include <stdio.h>

void intro();
void receipts();
void Payrolls();
void getname(char[]);
float getsales();
float getbonus();
float commission(float);
void WithHoldingTax(float, float, float);
float FedwithHolding(float);
float StateWithHolding(float);
float Retirement(float);
float Totalization(float, float, float, float);

int main() {
    Payrolls();
    return 0;
}

float commission(float sales) {
    return sales * 0.125;
}

float totalEarnings(float commission, float bonus) {
    return commission + bonus;
}

float FedwithHolding(float totalEarnings) {
    return totalEarnings * 0.25;
}

float StateWithHolding(float totalEarnings) {
    return totalEarnings * 0.10;
}

float Retirement(float totalEarnings) {
    return totalEarnings * 0.08;
}

void Payrolls() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++) {
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
        printf("\nTotal Net Earnings\t: %.2f\n\n", netearnings);
    }
}

void intro() {
    printf("-------------------------------------\n");
    printf("\t  ARCTIC ICE COMPANY\n");
    printf("-------------------------------------\n");
}

void getname(char name[]) {
    printf("Enter employee name\t:  ");
    scanf("%s", name);
}

float getsales() {
    float sales;
    printf("Enter sales\t\t:  ");
    scanf("%f", &sales);
    return sales;
}

float getbonus() {
    float bonus;
    printf("Enter bonus\t\t:  ");
    scanf("%f", &bonus);
    return bonus;
}

void receipts() {
    printf("-------------------------------------\n");
    printf("\t      Payrolls\n");
    printf("-------------------------------------\n");
}

void WithHoldingTax(float federal, float state, float retirement) {
    printf("\nFederal Withholding:\t: %.2f\n", federal);
    printf("State Withholding:\t: %.2f\n", state);
    printf("Retirement Plan\t        : %.2f\n", retirement);
}

float Totalization(float totalEarnings, float federal, float state, float retirement) {
    return totalEarnings - (federal + state + retirement);
}
