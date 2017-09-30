#include<stdio.h>
int main()
{
    printf("\n\t Convert Fahrenheit to Celsius  \n");
    printf("\n\t ================================\n");
    float fahrenheit,celsius;
    printf("\n\t Enter Temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32) * 5/9;
    printf("\n\t %f fahrenheit = %f celsius",fahrenheit,celsius);
    return 0;

}
