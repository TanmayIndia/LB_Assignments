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

    Ret = open(Fname, O_RDONLY);

    if(Ret == -1)
    {
        printf("Error in opening file\n");
        return -1;
    }
    else
    {   
        printf("File opened successfully\n");
    }

    close(Fd);
    
    return 0;
}