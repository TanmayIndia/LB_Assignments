#include<stdio.h>

/*
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/
void Pattern(int iRows, int iCol)
{
    int i=0, j=0;

    for(i=iRows; i>0; i--)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%d\t", i);
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