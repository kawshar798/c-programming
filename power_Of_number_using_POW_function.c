#include<stdio.h>
#include<math.h>//use for pow() function;
int main()
{
    printf("\n\t Find power of a number using POW() function  \n");
    printf("\n\t ===============================================\n");
    int base,exponent,result;
    printf("\t Please Enter Base and Exponent: ");
    scanf("%d %d",&base,&exponent);
    result = pow(base,exponent);
    printf("\n\t %d ^ %d = %d",base,exponent,result);
    return 0;

}
