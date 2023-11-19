/*
    Write a program to accept string from user and convert it into capital case
*/

#include<stdio.h>

void strlwrx(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
               *str= (*str-32);
        }
        str++;
    }
}    

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("The modified string is: %s", arr);

    return 0;
}
