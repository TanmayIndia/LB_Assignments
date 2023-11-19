/*
    Write a program to accept string from user and display only digits from that string
*/
#include<stdio.h>

void DisplayDigits(char str[])
{
    int iCnt1 = 0 , iCnt2 = 0; 
    char charPtr[20]= {'\0'};

    printf("\nBefore: %s\n", str);
    
    while(*str != '\0')
    {
        if((*str=='0') || (*str == '1') || (*str == '2') || (*str == '3') ||(*str == '4') || (*str == '5') || (*str == '6') || (*str == '7') || (*str== '8') || (*str == '9'))
        {
            charPtr[iCnt2]= str[iCnt1];
            iCnt2++;           
        }
        str++;
    }
    charPtr[iCnt2]='\0';
    printf("\nAfter removing all characters except digits: %s\n", charPtr);
}
    

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    DisplayDigits(arr);

    return 0;
}