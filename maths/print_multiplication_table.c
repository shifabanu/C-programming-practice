/******************************************************************************

 Display multiplication table of a certain number
 
 Step 1: Ask for the number that you want a multiplication table for
 Step 2: Ask until what limit(number) you wanna show the multiplication
 Step 3: Iterate until we reach the number
 Step 4: Display the value of each multiplication
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, limit, i; // variables needed in code
    
    printf("Please enter the number you want to see the multiplication table: ");
    scanf("%d", &num); // take the number
    printf("\nPlease enter the limit of the table: ");
    scanf("%d", &limit); // take the end number
    
    i=1;
    
    while(i<=limit)
    {
        printf("\n%d * %d = %d ", num, i, (num*i)); // print multiplication of the numbers
        i++;
    }

    return 0;
}
