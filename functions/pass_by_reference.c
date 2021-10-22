/******************************************************************************

 Call by reference
 OR 
 Pass by reference

A pointer is passed by the calling function.
Changes we make in the formal parameters(calle function) reflect in 
the caller function. 

*******************************************************************************/

#include <stdio.h>

void add(int* a, int* b)
{
    // the variables are the addresses
    
    *a= *a+ *b;
    *b=*b+1;
    //printf("\nAfter calling: a = %d   b = %d", a,b);
}

int main()
{
    int x=2, y=10;
    printf("Before calling: x = %d   y = %d", x,y);
    
    // pass the address of the variables
    add(&x,&y);
    
    printf("\nAfter calling: x = %d   y = %d", x,y);

    return 0;
}
