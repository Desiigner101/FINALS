/*
Author: SARSONAS, Kervin Gino M.
Description: Loop_Activities 
Date: November 9, 2023
Version: 1.0
*/


#include <stdio.h>


int main(){
	

int choice;
int i;
int num, sum;
int integer;
int g, k;
int range, nos, even, odd;
double avg, root;
int sqr, cub;
int neweven, higheven;


	for(i = 1; i<= 12; i++){
		printf("Exercise - %d\n", i);
	}
	printf("0 - Exit\n");
	
	printf("\nEnter Exercise # to interact: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:

		while(num < 10){
			sum += num;
			printf("%d ", sum);
			num++;
		}
		
		break;
		
		case 2:
		for(integer = 40; integer > 1; integer -=2){
			printf("%d ", integer);
		}
		
		break;
		
		case 3:
			for(g = 10, k =1; g >= 6, k <= 5; g--, k++){
				printf("%d\n", g);
				printf("%d\n", k);
			}
		break;
		
		case 4:
			
			printf("Enter range of integers: ");
			scanf("%d", &range);
			
			for(i = 1; i <= range; i++){
				printf("Integer %d: ", i);
				scanf("%d", &nos);
				
				if(nos %2 == 0){
					even++;
				}
				else if(nos % 1 == 0){
					odd++;
				}
				sum += nos;
			}
			avg = sum/range;
			
			printf("Sum of all #: %d\nThere are %d even #\nThere are %d odd #\n\nThe average is: %.2lf", sum, even, odd, avg);
			
			break;
			
		case 5:
			
			for(i = 1; i<= 20; i++){
				printf("Number %d: ", i);
				scanf("%d", &nos);
			}
				sqr = nos*2;
				cub = nos*nos*nos;
				root = sqrt(nos);
				
			printf("Number\n%d", nos);
			
			break;
			
		case 6:
			
			for(i = 3; i <= 9; i+= 3){
				printf("%d ", i);
			}
				
			for(g = 2; g <= 8; g+= 3){
				printf("%d ", g);
			}
			
			for(k = 1; k <= 7; k+= 3){
				printf("%d ", k);
			}
			printf("0");
				
			break;
				
				
		case 7:
			
			for(i = 1; i<= 50; i++){
				if(i % 1 == 0){
					printf("%d\n", i);
				}
				if(i % 3 == 0){
	
				printf("%d\t Fizz\n", i);
				}
				
				
			}
			
			break;
			
		case 8:
			printf("Input:\n");
			do{
				scanf("%d", &nos);
				
				if(nos % 2 == 0){
					neweven = nos;
					if(neweven > even){
						even = neweven;
					}
					if(even > higheven){
						higheven = even;
					}
				}
			}while(nos != 0);
			}
		
		}
		
		
		
		//last braces
	
		
			
	
			
	
	


