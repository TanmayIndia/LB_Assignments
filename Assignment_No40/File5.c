#include<stdio.h>
#include<stdbool.h>
//WAP to accept a number from user and renge of positions from user . Toggle all its bits from that range

int ToggleBits(int iNum, int iStart, int iEnd)
{
    int iMask = 0x00000001;
    int iCnt = 0;
    iCnt = iStart;
    int iModified = iNum;
    iMask = iMask << (iCnt -1);

    while(iCnt != (iEnd+1))
    {
        iNum = (iNum ^ iMask);
        iMask = iMask << 1;
        iCnt++;
    }
    return iNum;
}

int main()
{
    int iVal = 0, iPos1 = 0, iPos2 = 0;
    int iRet = false;

    printf("Enter Number \n");
    scanf("%d",&iVal);

    printf("Enter start Position \n");
    scanf("%d",&iPos1);
    
    printf("Enter end Position \n");
    scanf("%d",&iPos2);

    iRet = ToggleBits(iVal, iPos1, iPos2);

    printf("The modified number is : %d\n", iRet);

    return 0;
}

/*
Num = 897
0   0   0   0   1   1   0   0   0   0   0   0   1 Toggle from 9th position to 13th position

---------------------------------------------------
1   1   1   0   0   1   0   0   0   0   0   0   1 => expected 7297



1110010000001
*/