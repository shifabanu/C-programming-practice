/******************************************************************************

 Find the sum of first n natural numbers.
 
 Step 1: Ask for the number to the user
 Step 2: Sum of n numbers is (n*n+1)/2
 Step 3: Display the result
 
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Please enter the number you want find the sum: ");
    scanf("%d",&num);
    printf("The sum of first %d numbers is: %d", num, num*(num+1)/2);
  return 0;
}
