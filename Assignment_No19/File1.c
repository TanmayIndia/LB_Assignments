#include<stdio.h>
/*
A B C D
A B C D
A B C D
A B C D
*/
void Pattern(int iRows, int iCol)
{
    int i=0, j=0;
    char ch = '\0';

    for(i=1 ; i<=iRows; i++)
    {
        for(j=1, ch='A'; j<=iCol; j++, ch++)
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