/******************************************************************************

Convert Decimal number into Binary

Step 1: Ask for the number from user
Step 2: Divide by 2 and replace the quotients until 0
Step 2: Store remainders in an array for each divison
Step 3: Print the array in an opposite direction

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, rem, array[100], i=0;
    printf("Please enter a Decimal number that you want to convert to Binay: ");
    scanf("%d", &num);
    
    if(num==0)
    {
        printf("\nThe binary conversion of decimal number %d is 0.", num);
    }
    else
    {
        printf("\nBinary conversion of %d is: ", num);
        while(num)
        {
            rem = num%2;
            array[i] = rem;
            num=num/2;
            i++;
        }
    }
    
    for(int j=i-1; j>=0; j--)
    {
        printf("%d",array[j]);
    }
    return 0;
}
