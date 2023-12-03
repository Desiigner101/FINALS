#include <stdio.h>

void savingsacc();
void intro();
void secintro();
float enterbalance();
float interestdata(float);
void printbalance(int, float, float);
void finalbalance(float);

int main(){
    savingsacc();

    return 0;
}

void savingsacc(){
    float inputbal, interest;
    intro();
    inputbal = enterbalance();
    secintro();
    for(int i = 1; i<=4; i++){
        interest = interestdata(inputbal);
        inputbal += interest;
        printbalance(i, interest, inputbal);
    }
    finalbalance(inputbal);
    
}

void intro(){
    printf("*****************************************\n");
    printf("\t\t    BANK\n");
    printf("*****************************************\n");
    printf("\t      SAVINGS ACCOUNT\n");
    printf("*****************************************\n");
}

float enterbalance(){
    float balance;
    printf("Enter your current account balance \t: ");
    scanf("%f", &balance);

    return balance;
}

void secintro(){
    printf("-------------------------------------------------------\n");
    printf("QUARTER\t\tINTEREST\t\tNEW BALANCE\n");
}

float interestdata(float balance){
    return 0.053 * balance;
}

void printbalance(int quarter, float interest, float balance){
    printf("%d\t\t%.2f\t\t\t%.2f\n", quarter, interest, balance);
}

void finalbalance(float balance){
    printf("-------------------------------------------------------\n");
    printf("Final Balance: %.2f", balance);
}
