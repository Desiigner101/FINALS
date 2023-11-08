#include <stdio.h>

int main(){
    int range, i, sum = 0, pos = 0, neg = 0, zero = 0;
    int between = 0;
    double avgpos, getpos;

    printf("Enter range: ");
    scanf("%d", &range);

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

    return 0;
}