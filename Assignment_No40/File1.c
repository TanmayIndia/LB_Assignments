#include<stdio.h>

//WAP to accept a number from user and count its ON(1) bits

int CountBits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo % 2)  == 1)
        {
            iCnt++;
        }
        iNo = (iNo / 2);
    }
    return iCnt;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iVal);

    iRet= CountBits(iVal);

    printf("The number of ON(1) bits in it: %d\n", iRet);
    
    return 0;
}