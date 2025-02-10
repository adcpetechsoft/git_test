#include <stdio.h>


int main(int argc, char *argv[])
{
    int a;
    int b;

    int x;
    int y;

    if(argc == 3)
    {

        sscanf(argv[1], "%i", &x);
        sscanf(argv[2], "%i", &y);

        printf("\n");

        printf("A: %i | B: %i\n", x, y);

        printf("The Mutiplication Table Program\n");
        printf("C/C++ Test Application for Unix/Linux\n");
        printf("Not for Commercial, Scientific and Military Use...\n\n");

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
            

            };

            printf("\n");


        };


    };

    
    printf("\n");

    printf("Program End...\n\n\n");


    return 0;

};
