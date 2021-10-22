/******************************************************************************

 Call by value
 OR 
 Pass by value

Values are passed by the calling function.
Changes we make in the formal parameters(calle function) does not reflect in 
the caller function. 
*******************************************************************************/

#include <stdio.h>

void add(int a, int b)
{
    a=a+b;
    printf("\nAfter calling: a = %d   b = %d", a,b);
}

int main()
{
    int x=2, y=10;
    printf("Before calling: x = %d   y = %d", x,y);
    add(x,y);
    

    return 0;
}
