#include<stdio.h>
//WAP   which accept number from user and toggle seventh bit of that number

int Offbit(int iNo)
{
 int iMask = 0X00000040;

 return (iNo ^ iMask);   
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

iVal = 137
iVal :   1   0   0   0   1   0   0   1  &
iMask:   0   1   0   0   0   0   0   0
---------------------------------------
         0   0   0   0   0   0   0   0

iVal = 137
iVal :   1   0   0   0   1   0   0   1  ^
iMask:   0   1   0   0   0   0   0   0
---------------------------------------
         1   1   0   0   1   0   0   1

        
*/