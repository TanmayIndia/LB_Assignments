#include<stdio.h>
/*
1 2 3 4 
5 6 7 8 
9 10 11 12
*/

void Pattern(int iRows, int iCol)
{
    int i=0, j=0, iCnt=0;

    for(i=iRows; i>0; i--)
    {
        for(j=1; j<=iCol; j++)
        {
            iCnt++;
            printf("%d\t", iCnt);
        }
            printf("\n");
    }
}
int main()
{
    int iValue1=0 , iValue2=0;

    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}