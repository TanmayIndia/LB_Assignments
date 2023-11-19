/*
Accept character from user. If it is capital then display all the characters from input characters till Z.
If input is small then print all the characters in reverse order till a. In other cases return directly.
*/

#include<stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if(ch>='A' && ch <= 'Z')
    {
        for(cCnt=ch; cCnt<='Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
    }
    else if(ch >='a' && ch <='z')
    {
         for(cCnt=ch; cCnt>='a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
    }
    else
    {
        printf("%c", cCnt);
    }
}

int main()
{
    char cValue= '\0';

    printf("Enter character.\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}