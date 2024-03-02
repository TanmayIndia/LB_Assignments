#include<stdio.h>
#include<stdbool.h>

bool CheckBits(int iNum, int iPos1, int iPos2)
{
    int iMask = 0x00000001, iResult = 0;

    iMask = iMask < (iPos1-1);

    iResult = iMask & iNum;

    if(iResult == iMask)
    {
        return true;
    } 
    else
    {
        iMask = 0X00000001;

        iMask = iMask < (iPos2-1);

        iResult = iMask & iNum;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int iVal = 0, iPos1 = 0, iPos2 = 0;
    bool bRet = false;

    printf("Enter Number \n");
    scanf("%d",&iVal);

    printf("Enter 1st Position \n");
    scanf("%d",&iPos1);
    
    printf("Enter 2nd Position \n");
    scanf("%d",&iPos2);

    bRet = CheckBits(iVal, iPos1, iPos2);

    if(bRet == true)
    {
        printf("TRUE.\n");
    }
    else
    {
        printf("FALSE.\n");
    }

    return 0;
}