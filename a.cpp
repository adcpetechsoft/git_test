#include <stdio.h>


int main(int argc, char *argv[])
{
    int a;
    int b;

    printf("\n");

    printf("The Multitable program\n\n");


    for(a=1; a<=10; a++)
    {
        
        for(b=1; b<=10; b++)
        {
            printf("%i\t", a*b);

        };

        printf("\n\n");


    };

    printf("Program End...\n\n");


    return 0;

};
