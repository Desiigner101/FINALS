#include <stdio.h>

int get_range(){
    int range;

    printf("Enter range: ");

    if(scanf("%d", &range) == 1){
        printf("Success!\n\n");
        printf("*****************************\n");
        return range;
    }
    else{
        printf("Error! Input Integers Only\nExiting...");
        return 1;
    }
}

double process_data(int range, int i, int sum, int pos, int neg, int zero){
    int between;
    double avgpos, getpos;

    if(scanf("%d", &range) != 1){
        return 1;
    }
    
    for(i = 1; i <= range; i++){
        int input;

        printf("Integer %d: ", i);
        scanf("%d", &input);

        if(input > 0){
            pos++;
            getpos += input;
            if(input >= 20 || input <= 60 && input % 4 == 0){
                between += input;
            }
        }
        else if(input < 0){
            neg++;
        }
        else if(input == 0){
            zero++;
        }
        sum += input;
    }
    avgpos = getpos / pos;

    printf("There are %d Positive Numbers\nThere are %d Negative Numbers\nThere are %d Zero Values\n", pos, neg, zero);
    printf("\n\nThe Average of the Positive Values is: %.2lf\n", avgpos);
    printf("The sum of all numbers between 20 and 60 that are divisible by 4 is: %d\n", between);

    return between, avgpos, getpos;
}

int main(){
    int range;
    int i, sum = 0, pos = 0, neg = 0, zero = 0;

    range = get_range();
    process_data(range, i, sum, pos, neg, zero);

    return 0;
}