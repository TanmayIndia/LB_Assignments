/*
Accept character from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*,(,),-,+)
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch>= '0') && (ch<= '9'))
    {
        return FALSE;
    }
    else if(ch>='A' && ch<= 'Z')
    {
        return FALSE;
    }
    else if(ch>= 'a' && ch<='z')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special.\n");
    }
    else
    {
        printf("It is not special.\n");
    }

    return 0;
}

