/******************************************************************************

    Find if the number is in the power of 2
    
    Logic: ANDing the num and num-1 will result into 0 if the num is
           in power of 2.
           Eg: 
           Suppose num = 4 so, num-1 = 3
           4: 1 0 0
           &
           3: 0 1 0
           ----------
              0  0  0 >----> result always gives us 0
           
           Suppose num = 3, so num-1 = 2
           3: 1 1
           &
           2: 1 0
           -------
              1 0 >---> result is not 0
           
               
    

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
