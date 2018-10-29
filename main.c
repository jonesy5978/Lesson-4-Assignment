/*********************************************************************************************
*   This program uses functions in C to implement temperature conversions of Fahrenheit to   *
*   Celsius and vice versa.                                                                  *
*                                                                                            *
*	 Name: Jonathan Jones							                                         *
*	 Date: 9/25/2018								                                         *
*********************************************************************************************/

#include <stdio.h>

//Function Declarations
void getProgramInfo ();
void getData (float* celsius, float* fahrenheit);
float convertToFahrenheit (float celsius, float fahrenheit);
float convertToCelsius (float celsius, float fahrenheit);
void printResults (float celsius, float fahrenheit, float convertedCelsius, float convertedFahrenheit);

int main (void)
{
    //Local Declarations
	float celsius;
	float fahrenheit;
	float convertedCelsius;
	float convertedFahrenheit;

    //Statements
    getProgramInfo ();

	getData (&celsius, &fahrenheit);
    //printf("**main: getData Celsius = %f; Fahrenheit = %f\n", celsius, fahrenheit); //Only used for debugging purposes.

	convertedFahrenheit = convertToFahrenheit (celsius, fahrenheit);
    //printf("**main: convertedFahrenheit = %f\n", convertedFahrenheit); //Only used for debugging purposes.

    convertedCelsius = convertToCelsius (celsius, fahrenheit);
    //printf("**main: convertedCelsius = %f\n", convertedCelsius); //Only used for debugging purposes.

    printResults(celsius, fahrenheit, convertedCelsius, convertedFahrenheit);

	return 0;
}	//main

/* ====================== getProgramInfo ====================
	This function prompts the user about what the program
	does then returns to main.
*/
void getProgramInfo ()
{
	printf("This program will convert Celsius into Fahrenheit and vice versa.\n");
    printf("It will then return the results on a new cleared screen.\n\n");

	return;
}   //getProgramInfo

/* ====================== getData ====================
	This function reads two integers from users input
	and returns them back to main.
*/
void getData (float* celsius, float* fahrenheit)
{
	printf("Please enter a Celsius temperature that you want converted to Fahrenheit: ");
	scanf("%f", celsius);
    printf("Please enter a Fahrenheit temperature that you want converted to Celsius: ");
    scanf("%f", fahrenheit);
    system("cls");

	//printf("**getData function result: Celsius = %f; Fahrenheit = %f\n", *celsius, *fahrenheit); //Only used for debugging purposes.

	return;
}	//getData

/* ====================== convertToFahrenheit ======================
	This function converts Celsius to Fahrenheit using the formula
	below. It will then return the result to main.
*/
float convertToFahrenheit (float celsius, float fahrenheit)
{
    //Local Declarations
    float convertedFahrenheit;

    //Statements and formula used to convert Celsius to Fahrenheit.
    fahrenheit = celsius * 1.8;
    convertedFahrenheit = fahrenheit + 32;

    //printf("**convertToFahrenheit function result: %f in Celsius is %f in Fahrenheit\n", celsius, convertedFahrenheit); //Only used for debugging purposes.

	return convertedFahrenheit;
}   //convertToFahrenheit

/* ====================== convertToCelsius =========================
	This function converts Fahrenheit to Celsius using the formula
	below. It will then return the result to main.
*/
float convertToCelsius (float celsius, float fahrenheit)
{
    //Local Declarations
    float convertedCelsius;

    //Statements and formula used to convert Fahrenheit to Celsius.
	celsius = fahrenheit - 32;
	celsius = celsius * 5;
	convertedCelsius = celsius / 9;

	//printf("**convertToCelsius function result: %f in Fahrenheit is %f in Celsius\n", fahrenheit, convertedCelsius); //Only used for debugging purposes.

	return convertedCelsius;
}	//convertToCelsius

/*	==================== printResults =====================
	Prints the results of converting Celsius to Fahrenheit
	and vice versa.
*/
void printResults (float celsius, float fahrenheit, float convertedCelsius, float convertedFahrenheit)
{
    //Local Declarations
    char degree = 248; //Assigning degree to represent the ASCII degree symbol.

    //Statements
	printf("%.1f %cC is %.1f %cF\n", celsius, degree, convertedFahrenheit, degree);
	printf("%.1f %cF is %.1f %cC\n", fahrenheit, degree, convertedCelsius, degree);

	return;
}	//printResults
