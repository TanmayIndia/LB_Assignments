/*

input: iRow = 4 , iCol = 5

output: 1  2  3  4  5
       -1 -2 -3 -4 -5 
        1  2  3  4  5
       -1 -2 -3 -4 -5  
        1  2  3  4  5
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0, iCnt=0;
 
   for(i=1; i<=iRow; i++)
   {
    if((i%2)!=0)
    {
        iCnt=1;
    }
    else
    {
        iCnt=-1;
    }
    for(j=1; j<=iCol; j++)
    {
        if((i%2)!=0)
    {
        printf(" %d\t", iCnt);
        iCnt++;
    }
    else
    {
        printf("%d\t", iCnt);
        iCnt--;
    }
    }
    printf("\n");
   }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}