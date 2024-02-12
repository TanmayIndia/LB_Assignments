#include<stdio.h>
#include<stdbool.h>

int ONbit(int iNo, int iPosition)
{
    int iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask << (iPosition-1);
    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        return iNo;
    }
    else
    {
        return (iNo ^ iMask);
    }
}

int main()
{
    int iVal = 0, iPos = 0, iRet = 0;
   
    printf("Enter number\n");
    scanf("%d",&iVal);

    printf("Enter position\n");
    scanf("%d",&iPos);

    iRet = ONbit(iVal, iPos);

    printf("The modified number is: %d.\n", iRet);

    return 0;
}