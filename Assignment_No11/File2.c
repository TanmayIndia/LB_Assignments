#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;
    BOOL bFlag = FALSE;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        
        if(iDigit==0)
        {
            bFlag=TRUE;
        }
       
        iNo=iNo/10;
    }
    return bFlag;
}


int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("It contains no zero\n");
    }

    return 0;
}