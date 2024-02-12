#include<stdio.h>
#include<stdbool.h>

bool Checkbit(int iNo, int iPosition)
{
    int iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask << (iPosition-1);
    
    if(iNo & iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iVal = 0, iPos = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iVal);

    printf("Enter position\n");
    scanf("%d",&iPos);

    bRet = Checkbit(iVal, iPos);

    if(bRet == true)
    {
        printf("The bit is ON at given position.\n");
    }
    else
    {
        printf("The bit is OFF at given position.\n");
    }

    return 0;
}