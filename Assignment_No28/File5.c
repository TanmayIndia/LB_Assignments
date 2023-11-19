/*
Write a program which accept string from user and reverse that string in place.
*/
#include<stdio.h>

void StrRevX(char* str)
{
    int iLength=0, iCnt1=0, iCnt2=0;
    char crr[20] = {'\0'};
    char *tempArr = str;
    
    printf("Before: %s\n", str);
   
    while(*tempArr != '\0')
    {
        iLength++;
        tempArr++;
    }

    for(iCnt1=(iLength-1); iCnt1>=0; iCnt1--)
    {
        crr[iCnt2]=str[iCnt1];
        iCnt2++;
    }

    printf("After: %s\n", crr);
}

int main()
{
    char arr[20] = {'\0'};
    
    printf("Enter string \n");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    return 0;
}