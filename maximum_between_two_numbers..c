#include<stdio.h>
int main()
{
    int firstNum,secondNum;
    printf("Please Enter Two Number: ");
    scanf("%d %d",&secondNum,&secondNum);
    if(firstNum > secondNum)
    {
        printf("%d is maximum number",firstNum);
    }
    else
    {

        printf("%d is maximum number",secondNum);
    }
    return 0;
}
