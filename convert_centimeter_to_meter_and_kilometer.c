#include<stdio.h>
int main()
{
    float centmr,meter,kilmtr;
    printf("Enter Centemeter: ");
    scanf("%f",&centmr);
    meter  = centmr / 100;//1 miter = 100cm
    kilmtr = centmr / 100000;//1 kilometer = 100000cm;
    printf(" Meter = %f",meter);
    printf("\n Kilometer = %f",kilmtr);
    return 0;
}
