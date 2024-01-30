#include<stdio.h>

int Strlen(char *charPtr)
{
    int iLength = 0;
  
    while(*charPtr != '\0')
    {
        iLength++;
        charPtr++;
    }
    return iLength;

}

int StrlenR(char *charPtr)
{
    static int iLength = 0;
  
    if(*charPtr != '\0')
    {
        iLength++;
        charPtr++;
        StrlenR(charPtr);
    }
    return iLength;

}

int main()
{
    int iRet = 0;
    char chArr[20] = {'\0'};

    printf("Enter string\n");
    scanf("%[^'\n']s",chArr);

    iRet = StrlenR(chArr);
    printf("The length of string is : %d", iRet);

    return 0;
}