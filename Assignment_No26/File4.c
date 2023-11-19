//Write a program which accept string from user and check whether it contains vowels in it or not

#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bRet=FALSE;

    while(*str != '\0')
    {
        if(*str=='a'|| *str=='A' || *str== 'e' || *str== 'E' || *str== 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str== 'U')
        {
            bRet=TRUE;
            break;
        }
        str++;
    }
    return bRet;
}

int main()
{
    char arr[20];
    BOOL bRet=FALSE;

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    bRet= ChkVowel(arr);

    if(bRet==TRUE)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}