/*
Write a program which accept string from user and accept one character. Return index of last occurence of that character.
*/
#include<stdio.h>

int LastChar(char* str, char ch)
{
    int iCnt1=0, iCnt2=-1;
   
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt2=iCnt1;
        }
        iCnt1++;
        str++;
    }

    return iCnt2;
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

    iRet = LastChar(arr,cValue);

    printf("Index of %c is %d", cValue, iRet);
    
    return 0;
}