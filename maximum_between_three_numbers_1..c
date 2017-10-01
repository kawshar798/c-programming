#include<stdio.h>
int main()
{
    int firstNum,secondNum,thirdNum;
    printf("Enter Three Number : ");
    scanf("%d %d %d",&firstNum,&secondNum,&thirdNum);
    if(firstNum > secondNum && firstNum > thirdNum)
    {
        printf("%d is  maximum number",firstNum);
    }
    else if(secondNum > firstNum && secondNum > thirdNum)
    {
        printf("%d is  maximum number",secondNum);
    }
    else
    {
        printf("%d is  maximum number",thirdNum);

    }

    return 0;
}
