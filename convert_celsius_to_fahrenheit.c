#include<stdio.h>
int main()
{
    printf("\n\t Convert Celsius to Fahrenheit\n");
    printf("\n\t ================================\n");
    float celsius,fahrnht;
    printf("\n\t Enter Temperature in celsius: ");
    scanf("%f",&celsius);
    fahrnht=(celsius * 1.8)+32;
    //fahrenheit=((celsius*9)/5)+32;
    printf("\n\t%f celsius = %f Fahrenheit",celsius,fahrnht);
    return 0;


}
