/*
Simple C Multiplication Program with X and Y input
For Git Test Only

Not for Commercial use

*/

// -------------------------------
// Preprocessor declaration

#include <stdio.h>



// -------------------------------
// program Entry Point
int main(int argc, char *argv[])
{
    // variables

    int a;
    int b;

    int x;
    int y;

    /// actual run

    // Arg test and validation
    if(argc == 3)
    {
        // args convert intu int
        sscanf(argv[1], "%i", &x);
        sscanf(argv[2], "%i", &y);

        // test args range
        if(x>0 && x<=10 && y>0 && y<=10)
        {

            // Do if sucess...
            printf("\n");

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

                    if(x==a && y==b)
                    {
                        printf("%i", x*y);
                    }else
                    {
                        if(a<x && b==y)
                        {
                            printf("*");
                        };

                        if(b<y && a==x)
                        {
                            printf("*");;

                        };

                    };

                    printf("\t");
            
                };

                printf("\n");

            };



        }else
        {
            // Print if args Out of Range
            printf("ERROR: ARGS Out of Range. [1-10] only...\n\n");
        };

       

    }else
    {
        // Print if args Invalid
        printf("ERROR: No or Invalid ARGS. Input <1-10> <1-10>...\n\n");
    };

    
    printf("\n");

    printf("Program End...\n\n\n");


    return 0;

};
