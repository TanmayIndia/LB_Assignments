#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int Ret = 0;
    char Fname[30] = {'\0'};

    printf("Please enter file name\n");
    scanf("%s",Fname);

    Ret = creat(Fname, 0777);

    if(Ret == -1)
    {
        printf("Error in creating file\n");
        return -1;
    }
    else
    {   
        printf("File created successfully\n");
    }

    close(Fd);
    
    return 0;
}