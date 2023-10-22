#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt1=0;
    
    if(iNo<0)
    {
      iNo=-iNo;  //Updator
    }

    for(iCnt1=1;iCnt1<=iNo;iCnt1++)
    {
        printf("$\t*\t");
    }
}


int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}