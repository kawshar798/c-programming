#include<stdio.h>
int main()
{
    char ch;
    printf("Please Enter a Number or Alphabet or charecter :");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("%c is Alphabet",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is Digit",ch);
    }
    else
    {
        printf("%c is  special character.",ch);
    }
    return 0;
}
