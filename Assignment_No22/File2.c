/*
Input: Row:4, Col:4
Output: * * * *
        * * *
        * * 
        * 
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;

    for(i=0;i<=iRow;i++)
    {
        for(j=1;j<=(iCol-i);j++)
        {
            if((i==1) || (j==1) || (j<=iCol) )
           {
              printf("*\t");
           }
           else
           {
              printf(" ");
           }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}