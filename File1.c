#include<stdio.h>
#include<stdbool.h>
//Program to check whether 15 th bit is on or off

bool ChkBool(int iNo)
{
    bool bFlag = false;
    unsigned int iMask = 0X00004000;
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
        printf("15th bit is on.\n");
    }
    else
    {
        printf("15th bit is off.\n");
    }

    return 0;
}


/*
0000 0000 0000 0000 0100 0000 0000 0000
0    0    0    0    4    0    0    0

*/