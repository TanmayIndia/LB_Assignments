#include<stdio.h>
#include<stdbool.h>
//Program to check whether bit number 1 and bit number 32 is on or off

bool ChkBool(int iNo)
{
    bool bFlag = false;
    unsigned int iMask = 0X80000001;
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
        printf("1st and 32th bit is on.\n");
    }
    else
    {
        printf("1st and 32th bit is off.\n");
    }

    return 0;
}


/*
1000 0000 0000 0000 0000 0000 0000 0001
8    0    0    0    0     0     0    1

*/