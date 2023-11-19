/*
    Write a program to accept string from user and count number of white spaces
*/
#include<stdio.h>

int CountWhite(char str[])
{
    int iCnt=0;
    while(*str != '\0')
    {
        if((*str == ' '))
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
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("The number of white spaces: %d", iRet);

    return 0;
}
