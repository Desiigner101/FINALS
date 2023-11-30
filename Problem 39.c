/*
Author: SARSONAS, Kervin Gino M.
Description: Problem 39
Date: Nov. 30, 2023.
Version: 1.0
*/

#include<stdio.h>
#include<math.h>

float c;
float area (int a, int b);
float peri (int a, int b, float c);
float extractC(int a, int b);

int main (void){
	int a, b;
	printf("Input a(height) and b(base): ");
	scanf("%d %d", &a, &b);
	printf("**********\n");
	printf("Height : %d\n", a);
	printf("Base   : %d\n", b);
	printf("**********\n");
	printf("The value of hypotenuse (c)            : %.2f\n",extractC(a, b));
	printf("The area of the right triangle is      : %.2f\n", area(a, b));
	printf("The perimeter of the right triangle is : %.2f",peri(a, b, c));
	
}

float area(int a, int b){
	return .5 * a * b;
}

float peri (int a, int b, float c){
	c = extractC(a, b);
	return a+b+c;
}

float extractC(int a, int b){
	return sqrt(a*a + b*b);
}
