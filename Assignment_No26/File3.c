//Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters 
#include<stdio.h>

int Difference(char *str)
{
    int iCnt1=0, iCnt2=0;
    char * temp1=str;
    char * temp2=str;

    while(*temp1 != '\0')
    {
        if((*temp1 >= 'A') && (*temp1 <= 'Z'))
        {
            iCnt1++;
        }
    temp1++;
    }

    while(*temp2 != '\0')
    {
        if((*temp2 >= 'a') && (*temp2 <= 'z'))
        {
            iCnt2++;
        }
     temp2++;
    }
    
    return iCnt1-iCnt2;
}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);
    printf("%d", iRet);

    return 0;
}