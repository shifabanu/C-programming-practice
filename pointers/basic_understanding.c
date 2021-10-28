/******************************************************************************

How pointers work

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a; // It is a variable stored in the memory
    unsigned int* p; // We created a pointer variable to store the address of a variable
    
    p = &a; // We saved the address of 'a' into the pointer variable we created
    
    // instead of defining and saving the value you can even try this: unsigned int* p = &a
    a = 123; // We save a value in our variable
    
    printf("%d", a); // This prints the value stored in variable 'a'
    
    printf("\n%u", p); // This prints the value stored in pointer variable 'p'
                       // i.e. the address of variable 'a'.
                       
    printf("\n%u", &a); // This prints the address of variable 'a' where it is stored
                        // It should be equal to the 'p' when we print It
    
    printf("\n%d", *p); // This goes to the address given in 'p' and prints out the value
                        // stored at the address. It should be equal to value of 'a'.
                        
    printf("\n%u", &p); // This prints the address where our pointer variable is saved. 
    
    // %u means we are accessing unsigned integer value. It can be normal int too. But to be more
    // specific we add "unsigned". It will be always positive because it is memory space.
    return 0;
}
