/*
Author: SARSONAS, Kervin Gino M.
Description: Problem 35
Date: Nov. 30, 2023.
Version: 1.0
*/

#include<stdio.h>
#include<math.h>
#include <stdbool.h>

char get_operator();
void get_numbers(int*, int*);
double get_calculations(int, int, char);
int newop(int, int, char);

int main(){
	
	int num1, num2;
	char operator;

	operator = get_operator();
	get_numbers(&num1, &num2);
	
	if(operator == '%' || operator == '/'){
	newop(num1, num2, operator);
	}
	else{
	get_calculations(num1, num2, operator);
	}
	return 0;
}


char get_operator(){
	bool keeprunning = false;
	char op;
	printf("\t\t\t\t********Calculator**********\n\n");
	printf("Enter Operator (+ - * / and %%): ");

	
	while(!keeprunning){
		scanf("%c", &op);
		if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'){
			printf("\nContinuing...\n");
			return op;
		}
		else{
			printf("Error!\nEnter Operator (+ - * /): ");
			scanf("%c", &op);
		}
	}
}

void get_numbers(int* num1, int* num2){
	
	printf("Enter Number1: ");
	scanf("%d", num1);
	
	printf("Enter Number2: ");
	scanf("%d", num2);
}


double get_calculations(int num1, int num2, char operator){
	double result;
	
	switch(operator){
		case '+':
		result = num1 + num2;
		break; 
		
		case '-':
		result = num1 - num2;
		break; 
		
		case '*':
		result = num1 * num2;
		break; 
		
	}
	printf("\nResult: %.2lf", result);
	return result;
}

int newop(int num1, int num2, char operator){
	int RESULT;
	
	switch(operator){
		case '/':
		RESULT = num1 / num2;
		break;
		
		case '%':
			RESULT = num1 % num2;
			break;
	}
	printf("\nRESULT: %d", RESULT);
	return RESULT;
}

