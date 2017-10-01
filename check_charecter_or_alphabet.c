#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Charecter: ");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        printf("%c is the Alphabet. ",ch);
    }
    else
    {
        printf("%c is the Charecter.",ch);
    }
    return 0;
}
