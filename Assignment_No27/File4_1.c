/*
    Write a program to accept string from user and display only digits from that string
    
*/

#include<stdio.h>
#include <string.h>
//using library function

char* DisplayDigits(char str[])
{
    int iCnt1 = 0 , iCnt2 = 0; 
    
    printf("\nBefore: %s\n", str);
    
    for(iCnt1=0 , iCnt2 = 0 ; iCnt1<= strlen(str); iCnt1++)
    {
        if((str[iCnt1] == '0') || (str[iCnt1] == '1') || (str[iCnt1] == '2') || (str[iCnt1] == '3') ||(str[iCnt1] == '4') || (str[iCnt1] == '5') || (str[iCnt1] == '6') || (str[iCnt1] == '7') || (str[iCnt1] == '8') || (str[iCnt1] == '9'))
        {
               str[iCnt2]= str[iCnt1];
               iCnt2++;           
        }
    }
    str[iCnt2]='\0';

    return str;
}
    

int main()
{
    char arr[20] = {'\0'};
    char *aRet = NULL;

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    aRet = DisplayDigits(arr);

    printf("\nAfter removing all characters except digits: %s\n", aRet);

    return 0;
}
