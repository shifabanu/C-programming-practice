/******************************************************************************

    Find if the number is in the power of 2

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    bool bit;
    printf("Enter the number: ");
    scanf("%d",&number);
    bit = ((number != 0) && !(number & number-1));
    if(bit== 1)
    {
        printf("The number is in the power of 2");
    }
    else
    {
        printf("The number is not in the power of 2");
    }
    

    return 0;
}
