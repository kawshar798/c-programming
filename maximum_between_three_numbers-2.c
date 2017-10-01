#include<stdio.h>
int main()
{
    int firstNum,secondNum,thirdNum;
    printf("Enter Three Number: ");
    scanf("%d %d %d",&firstNum,&secondNum,&thirdNum);
    if(firstNum > secondNum && firstNum > thirdNum)
    {
        printf("%d",firstNum);
        if(secondNum>thirdNum)
        {
            printf("%d",secondNum);
            printf("%d",thirdNum);
        }
        else
        {
            printf("%d",thirdNum);
            printf("%d",secondNum);
        }


    }
    else if(secondNum > firstNum && secondNum > thirdNum)
    {
        printf("%d",secondNum);
        if(firstNum > thirdNum)
        {
            printf("\t%d",firstNum);
            printf("\t%d",thirdNum);
        }
        else
        {
            printf("\t%d",thirdNum);
            printf("\t%d",firstNum);
        }

    }
    else
    {
        printf("%d",thirdNum);
        if(firstNum > secondNum)
        {
            printf("\t%d",firstNum);
            printf("\t%d",secondNum);
        }
        else
        {
            printf("/t%d",secondNum);
            printf("/t%d",firstNum);

        }

    }
    return 0;
}
