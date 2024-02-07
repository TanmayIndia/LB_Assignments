#include<stdio.h>
//WAP   which accept number from user and off seventh bit of that number if it is on

int Offbit(int iNo)
{
 int iMask = 0X00000040;
 int iResult = 0;

 iResult = (iNo & iMask);

    if(iResult == iMask) // 7th bit is on
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);
    
    iRet = Offbit(iVal);

    printf("The modified number is : %d", iRet);    

    return 0;
}


/*
0000 0000 0000 0000 0000 0000 0000 0000
0000 0000 0000 0000 0000 0000 0100 0000
iMask = 0X00000040

iVal = 170
iVal :   0 1 0 1 0 1 0 1 0  &
iMask:   0 0 1 0 0 0 0 0 0
---------------------------
          0  0  0  0  0  0  0 0 0

iVal = 196
iVal :   0 1 1 0 0 0 1 0 0  &
iMask:   0 0 1 0 0 0 0 0 0
-----------------------------
         0  0  1  0  0  0 0 0 0  
*/