/*
Write a program which accept string from user and accept one character. Check whether that character is present int string or not 
*/
#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

BOOL ChkChar(char* str, char ch)
{
    BOOL bFlag = FALSE;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue= '\0';

    BOOL bRet = FALSE;

    printf("Enter string \n");
    scanf("%[^'\n']s", arr);

    printf("Enter character\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}