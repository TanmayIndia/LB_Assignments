#include<stdio.h>
/*
A  A  A  A  A 
B  B  B  B  B 
C  C  C  C  C 
*/
void Pattern(int iRows, int iCol)
{
    int i=0, j=0;
    char ch = '\0';

    for(i=1, ch='A' ; i<=iRows; i++ , ch++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%c\t", ch);
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