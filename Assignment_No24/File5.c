/*
Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM,
B at 8:30 AM, c at 9:20 AM and D at 10:30 AM. (Applicaition should be case insensitive)
Input: 6
Outpt: TRUE
Input: t
output: FALSE
*/
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'a' || chDiv == 'A')
    {
       printf("Exam of division A at 7 AM.\n");
    }
    else if(chDiv == 'b' || chDiv == 'B')
    {
        printf("Exam of division A at 8:30 AM.\n");
    }
     else if(chDiv == 'c' || chDiv == 'C')
    {
        printf("Exam of division A at 9:20 AM.\n");
    }
     else if(chDiv == 'd' || chDiv == 'D')
    {
        printf("Exam of division A at 10:30 AM.\n");
    }
    else
    {
        printf("Please enter correct division.\n");
    }
   
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}



