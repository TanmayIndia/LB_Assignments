/*
Write a program which accept string from user and accept one character. Return index of first occurence of that character.
*/
#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

int FirstChar(char* str, char ch)
{
    int iCnt=0;
    BOOL bFlag = FALSE;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        iCnt++;
        str++;
    }

    if(bFlag == TRUE)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
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

    iRet = FirstChar(arr,cValue);

    printf("Index of %c is %d", cValue, iRet);
    
    return 0;
}