// Accept character from user and display its ASCII value in decimal , octal and hexadecimal
#include<stdio.h>

void Display(char ch)
{
    printf("Decimal: %d\t", ch);
     printf("Octal: %o\t", ch);
      printf("Hex: %x\t", ch);
}

int main()
{
    char cValue= '\0';

    printf("Enter character.\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}