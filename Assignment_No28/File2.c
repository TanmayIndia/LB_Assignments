/*
Write a program which accept string from user and accept one character. Return frequency of that character.
*/
#include<stdio.h>

int CountChar(char* str, char ch)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue= '\0';

    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", arr);

    printf("Enter character\n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr,cValue);

    printf("Frequecy of %c is %d", cValue, iRet);

    return 0;
}