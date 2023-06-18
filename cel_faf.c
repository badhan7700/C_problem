//C program to convert temperature from degree celsius to fahrenheit
#include<stdio.h>
int main()
{
    float cel, fah;
    printf("Enter the value celcius: ");
    scanf("%f", &cel);
    fah=(9/5*cel)+32;
    printf("%.2f Celsius = %.2f Fahernheit",cel,fah);
    return 0;
}
