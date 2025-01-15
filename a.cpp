#include <stdio.h>


int main(int argc, char *argv[])
{
    int a;
    int b;

    printf("The Multitable program\n\n");

    printf("\t");

    for(a=1; a<=10; a++)
    {
        printf("%i\t", a);
    };

    printf("\n");

    for(a=1; a<=10; a++)
    {
        printf("%i\t", a);
        
        for(b=1; b<=10; b++)
        {
            printf("%i\t", a*b);

        };

        printf("\n");


    };

    printf("Program End...\n\n");


    return 0;

};
