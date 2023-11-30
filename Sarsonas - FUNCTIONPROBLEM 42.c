/*
Author: SARSONAS, Kervin Gino M.
Description: Function Problem 42
Date: Nov. 30, 2023
Version: 1.0
*/

#include <stdio.h>

void temperature();
void Celsius();
float getCelsius ();
double celToFahr(float cel);
void printFahr(double fahr);
void Fahrenheit();
float getFahrenheit();
double fahrToCel(float fahrenheit);
void printCel(float celcius);

void main ()
{
	temperature();
}
void temperature()
{
	printf("This is a program that converts temperature\n");
	Celsius();
	Fahrenheit();
}

void Celsius()
{
	float cel, fahr;
	printf("Welcome to Celsius!\n");
	cel = getCelsius();
	fahr = celToFahr(cel);
	printFahr(fahr);
}

float getCelsius ()
{
	float celsius;
	printf("Input temperature in Celsius:\t");
	scanf("%f", &celsius);
	return celsius;
}

double celToFahr(float cel)
{
	float fahr;
	fahr = 32 + cel * (9.0/5);
	return fahr;
}

void printFahr(double fahr)
{
	printf("Temperature in Fahrenheit is:\t%.2f\n",fahr);
}

void Fahrenheit()
{
	float celsius, fahrenheit;
	printf("Welcome to Fahrenheit!\n");
	fahrenheit = getFahrenheit();
	celsius = fahrToCel(fahrenheit);
	printCel(celsius);
}
float getFahrenheit()
{
	float fahreinheit;
	
	printf("Input temperature in Fahreinheit:\t");
	scanf("%f", &fahreinheit);
	return fahreinheit; 
}
double fahrToCel(float fahrenheit)
{
	float cel;
	cel = (5.0/9) * (fahrenheit - 32);
	return cel;
}
void printCel(float celcius)
{
	printf("Temperature in Celcius is:\t%.2f\n", celcius);
}
	





