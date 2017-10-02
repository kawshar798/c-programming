#include<stdio.h>
int main()
{
    char ch;
    printf("Please Enter a Alphabet: ");
    scanf("%c",&ch);
    if('a'==ch || 'e'==ch || 'i'==ch || 'o'==ch || 'u'==ch ||'A'==ch || 'E'==ch || 'I'==ch || 'O'==ch || 'U'==ch )
    {
        printf("%c is Vowel",ch);
    }
    else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("%c is consonant",ch);
    }
    else
    {
        printf("Invalid Input!!!!!!!!!!!");
    }
    return 0;
}
