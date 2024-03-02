#include<stdio.h>
#include<stdbool.h>

//WAP to accept a number from user and check whether 9th or 12th bit is on or off 

bool CheckBits(int iNo)
{
   int iMask1 = 0X00000100;//9th bit is on
   int iMask2 = 0X00000800;//9th bit is on
   int iResult = 0;
   bool bFlag = false;

   iResult = iNo & iMask1;

   if(iResult == iMask1)
   {
        return true;
   }
   else
   {
        iResult = iNo & iMask2;
        if(iResult == iMask2)
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
    int iVal = 0;
    bool bRet = false;

    printf("Enter Number \n");
    scanf("%d",&iVal);

    bRet= CheckBits(iVal);

   if(bRet == true)
   {
        printf("TRUE");
   }
   else
   {
         printf("FALSE");
   }
    
    return 0;
}

/*
0000 0000 0000 0000 0000 0000 0000 0000
0000 0000 0000 0000 0000 0001 0000 0000
0    0    0    0    0    1     0    0  

0000 0000 0000 0000 0000 1000 0000 0000
0     0    0   0    0    8    0    0
12th bit
1000 0000 0000 &
0001 0000 0001
--------------
0000 0000 0000

9th bit
0001 0000 0000 &
0001 0000 0001
--------------
0001 0000 0000



*/
