#include<stdio.h>

void CommonBits(int iNum1, int iNum2)
{
    int ibigNum = 0, iSize = 0 , iCnt = 0, iRet1 = 0, iRet2 = 0;
    int iMask = 0x00000001;

    if(iNum1 > iNum2)
    {
        ibigNum = iNum1;
    }
    else
    {
        ibigNum = iNum2;
    }

    while(ibigNum != 0)
    {
        iSize++;
       ibigNum = (ibigNum /2) ;
    }
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iMask = iMask << (iCnt);
        iRet1 = (iNum1 & iMask);
        iRet2 = (iNum2 & iMask);

        if(iRet1 == iRet2)
            printf("%d\t",(iCnt+1)); 
        iMask = 0X00000001;   
    }
}
int main()
{
    int iVal1 = 0, iVal2 = 0;

    printf("Enter 1st Number \n");
    scanf("%d",&iVal1);

    printf("Enter 2nd Number \n");
    scanf("%d",&iVal1);

    CommonBits(iVal1, iVal2);

    return 0;
}