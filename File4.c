#include<stdio.h>
#include<stdbool.h>
//Program to check whether 7th and 8th and 9th  bit is on or off

bool ChkBool(int iNo)
{
    bool bFlag = false;
    unsigned int iMask = 0X000001C0;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult==iMask)
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    int iVal = 0;
  
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iVal);

    bRet = ChkBool(iVal);

    if(bRet == true)
    {
        printf("7th and 8th, 9th bit is on.\n");
    }
    else
    {
        printf("7th and 8th, 9th bit is off.\n");
    }

    return 0;
}


/*
0000 0000 0000 0000 0000 0001 1100 0000
0    0    0    0   0    1    C    0

*/