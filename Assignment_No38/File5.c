#include<stdio.h>
//WAP   which accept number from user and off seventh and on its first 4 bits. Return modified number.

int Offbit(int iNo)
{
 int iMask = 0X0000000F;
 
    return (iNo | iMask);  

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
0000 0000 0000 0000 0000 0000 0000 1111
0    0    0    0    0    0    0    F
iMask = 0X0000000F

iVal = 75
iVal :   1  0   0   1   0   1   1   &
iMask:   0  0   0   1   1   1   1  
--------------------------------------------------
        0   0   0   1   0   1   1  

iVal = 75
iVal :   1  0   0   1   0   1   1   |or
iMask:   0  0   0   1   1   1   1  
--------------------------------------------------
         1  0   0   1   1   1  1      
   
*/