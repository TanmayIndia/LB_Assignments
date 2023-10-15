//Write a program to accept number from and display its multiplication of factors
#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt=0;
    int iMulti=1;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=(iNo/2);iCnt>=1 ;iCnt--)
        {
            if((iNo%iCnt)==0)
                {
                    iMulti=iMulti*iCnt;
                }
        }
        return iMulti;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("%d",iRet);

    return 0;
}