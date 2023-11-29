#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void temperature();
char get_temperature(bool);
double enter_temp();
double process(int, double);
void results(char, double);

int main(){

    temperature();
    return 51;
}

void temperature(){

    bool justrun = false;
    char get_temp;
    double get_input, get_process;
    
    printf("*************************Welcome to My Temparature Conversion Program!!*************************************\n");
    get_temp = get_temperature(justrun);
    get_input = enter_temp();
    get_process = process(get_temp, get_input);
    results(get_temp, get_process);
}

char get_temperature(bool justrun){

    char temp;
    printf("Enter Temperature to Convert (F or C):  ");

    while(!justrun){
        scanf("%c", &temp);
        temp = toupper(temp);

        if(temp == 'F' || temp == 'C'){
            printf("\nContinuing...\n");
            return temp;
        }
        else{
            printf("\nError\nEnter Valid Temperature: ");
            scanf("%c", &temp);
        }
    }
}

double enter_temp(){

    double temp1;

    printf("Enter Temparature: ");
    scanf("%lf", &temp1);
    return temp1;
}

double process(int get_temp, double get_input){

    double cel, fahr;
    
    if(get_temp == 'F'){
        fahr = (get_input * 1.8) + 32;
        return fahr;
    }
    else{
        cel = (get_input - 32) * 5/ 9;
        return cel;
    }
}

void results(char get_temp, double get_process){
    if(get_temp == 'F'){
        printf("The Temperature Conversion to Fahrenheit is equivalent to: %.2lf", get_process);
    }
    else{
        printf("The Temperature Conversion Into Celsius is Equivalent to: %.2lf", get_process);
    }
}