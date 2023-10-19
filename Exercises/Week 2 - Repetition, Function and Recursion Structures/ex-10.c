#include <stdio.h>

/* Exercise description: 

Implement a FUNCTION that receives a temperature in degrees Fahrenheit as a parameter and RETURNS it converted into degrees Celsius. 
The conversion formula is: C = (F – 32.0) *(5.0/9.0), with F being the temperature in Fahrenheit and C being the temperature in Celsius.

Function prototype:

float convert_fahrenheit_to_celsius(float temp);

Test case format: this is the format of the test cases that appear when evaluating the activity;

Input:
float temp

Output:
return from the convert_fahrenheit_to_celsius function*/

float convert_fahrenheit_to_celsius(float temp);

int main()
{
    float temperature_fahrenheit = 0, temperature_celsius = 0;

    printf("Enter the temperature in degrees Fahrenheit:\n");
    scanf("%f", &temperature_fahrenheit);

    temperature_celsius = convert_fahrenheit_to_celsius(temperature_fahrenheit);

    printf("Temperature in degrees Celsius is: %.1f", temperature_celsius);

    return 0;
}

float convert_fahrenheit_to_celsius(float temperature_fahrenheit) {
    float temperature_celsius = 0;
    
    temperature_celsius = (temperature_fahrenheit - 32.0) * (5.0/9.0);
    
    return temperature_celsius;
}