//Accept one character from user and convert case of that character
#include<stdio.h>

void DisplayCovert(int cValue)
{
    if(cValue>96 && cValue<123)
    {
        printf("%c",(cValue-32));
    }
    else if(cValue>64 && cValue <90)
    {
        printf("%c",(cValue+32));
    }
}

int main()
{
    char cValue= '\0';

    printf("Enter character:\t");
    scanf("%c",&cValue);

    DisplayCovert(cValue);

    return 0;
}