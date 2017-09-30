#include<stdio.h>
#include<math.h>//use for pow() function;
int main()
{
    printf("\n\t Find square root of a number using SQRT() function  \n");
    printf("\n\t ===============================================\n");

    double number,result;
    printf("\n\t Please Enter a Number: ");
    scanf("%lf",&number);
    result = sqrt(number);
    printf("\t %lf square root is %lf",number,result);
    return 0;

}

