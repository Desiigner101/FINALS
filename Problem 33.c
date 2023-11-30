/*
Author: SARSONAS, Kervin Gino M.
Description: PROBLEM 33
Date: Nov. 30, 2023.
Version: 1.0
*/

#include <stdio.h>

float inch(float in);
void enterinch(float *in);



void enterinch(float *in)
{
	printf("Enter Inches: ");
		scanf("%f", in);
		
}


float inch(float in)
{
	float centi;
	centi = 2.54 * in;
	printf("%.2f in Inches is %.2f in Centimeter", in,centi);
	return centi;
}

int main(){
	
	float in;
	enterinch(&in); 


	
	float get = inch(in);
	return 0;
	
}
