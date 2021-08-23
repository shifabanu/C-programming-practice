/******************************************************************************
Check if the numbers have opposite signs
HINT: XOR or EXOR

0 0 = 0
0 1 = 1
1 0 = 1
1 1 = 0
/*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b;
    bool sign;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    sign =  (a ^ b) < 0;
    if(sign==true)
    {
        printf("Both have opposite signs");
    }
    else
    {
        printf("Both have same signs");
    }
    


    return 0;
}
