#include<stdio.h>

void Number(int iNo)
{
   if(iNo<=50)
   {
        printf("Small\n");
   }
   else if(iNo>100)
   {
        printf("Greater\n");
   }
   else
   {
     printf("Medium\n");
   }
}

int main()
{
    int iValue=0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}