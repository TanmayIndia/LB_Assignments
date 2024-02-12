#include<stdio.h>
//WAP which accept one number from user and toggle contents of first and last nibble of the number. Return modified number.(nibble is a group of 4 bits)

int SetFirstAndLastBit(int iNum)
{
    iNum = iNum | iNum >> 1;
     iNum = iNum | iNum >> 2;
      iNum = iNum | iNum >> 4;
       iNum = iNum | iNum >> 8;
        iNum = iNum | iNum >> 16;
    
    iNum = (iNum + 1) >> 1;

    return iNum + 1;
}
int toggleFirstAndLastBit(int iNo)
{
    int iMask = 0;

    iMask = SetFirstAndLastBit(iNo);

    return (iNo ^ iMask);
}
int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter nuumber\n");
    scanf("%d",&iVal);

    iRet = toggleFirstAndLastBit(iVal);

    printf("The modified number is : %d\n", iRet);

    return 0;
}