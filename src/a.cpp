#include <stdio.h>


int main(int argc, char *argv[])
{
    int a;
    int b;

    if(argc != 2)
    {
        printf("ERROR: Input X and Y in args...\n\n");
    };

    printf("\n");

    printf("The Mutiplication Table Program\n");
    printf("C/C++ Test Application for Unix/Linux\n");
    printf("Not for Commercial, Scientific and Military Use...\n\n");


    for(a=1; a<=10; a++)
    {
        
        for(b=1; b<=10; b++)
        {
            printf("%i\t", a*b);

        };

        printf("\n");


    };

    printf("\n");

    printf("Program End...\n\n\n");


    return 0;

};
