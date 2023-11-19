//Write a program which accept string from user and display it in reverse order
#include<stdio.h>

void Reverse(char *str)
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
    char arr[20];
   
    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}