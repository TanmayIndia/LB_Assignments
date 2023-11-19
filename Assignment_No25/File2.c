/*
Accept character from user. If character is small display its corresponding capital character, 
and if it is capital then display its corresponding small value. In other cases display it as it is. 
*/
#include<stdio.h>

void Display(char ch)
{
   if(ch>= 'A' && ch<= 'Z')
   {
        printf("%c", (ch+32));
   }
   else if(ch >= 'a' && ch<= 'z')
   {
        printf("%c", (ch-32));
   }
   else
   {
        printf("%c", ch);
   }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c", &cValue);

    Display(cValue);
   
    return 0;
}