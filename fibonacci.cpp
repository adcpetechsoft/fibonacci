/*

Fibonacci

Code created as an answer to https://code.golf/fibonacci
C/C++ Version

Created by anvi_d@hotmai.com

*/


// -----------------------
// Preprocessor Declaration

#include <stdio.h>


// -----------------------
// Program Entry Point

int main(int argc, char* argv[])
{

    // Variables
    int x;
    int y;
    int z;

    int j;

    // Initialization of Variables
    x=0;
    y=1;
    z=1;

    j=1;

    // looping for computation and print
    do
    {
        
        printf("%i\n", x);

        z=x+y;
        x=y;
        y=z;



        j++;

    } while ( j<=30);

    printf("832040\n");
    

   return 0; 

};
