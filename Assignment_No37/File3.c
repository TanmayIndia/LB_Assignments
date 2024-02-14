#include<stdio.h>
#include<stdbool.h>
//Program to check whether 7th and 15th and 21st, 28th bit is on or off

bool ChkBool(int iNo)
{
    bool bFlag = false;
    unsigned int iMask = 0X08104040;
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
        printf("7th and 15th and 21st, 28th bit is on.\n");
    }
    else
    {
        printf("7th and 15th and 21st, 28th bit is off.\n");
    }

    return 0;
}


/*
0000 1000 0001 0000 0100 0000 0100 0000
0    8    1    0   4    0    4    0

*/