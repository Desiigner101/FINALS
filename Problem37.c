#include <stdio.h>

float evolve(float);
void inputnum(float*);

int main() {

    float numbers;
    float input;
    inputnum(&input);

    float getdecimal = evolve(input);
    printf("Rounded number: %f\n", getdecimal);

    return 0;
}

void inputnum(float* input){

    printf("Enter Input: ");
    scanf("%f", input);
}

float evolve(float numbers) {
    
    return ((int)(numbers * 100 + 0.5)) / 100.0;
}


