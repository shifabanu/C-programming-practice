/******************************************************************************

 Check if the number is prime or not
 
 Method 1: We can go until 2 to n-1 and divide the number to check if the 
 remainder is zero or not, but this process increases the time and space 
 complexities O(n) in worst case scenario is infinite if the number is very 
 large.
 
 Method 2: A better method. If we calculate square root of the number, 
 then, there will always be two factors. One of each will be less than
 sqrt(n) and the other one will always be greater than the sqrt(n). 
 
 Step 1: Take an input number from the user
 Step 2: Find the sqrt and start the loop from 2 until sqrt-1
 Step 3: Initialize a flag
 Step 4: Check if the number is divisible or not by [2,sqrt-1]
 Step 5: Stop and exit the loop if remainder is 0 (i.e number gets divisible by
         any number in [2,sqrt-1])

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num, sq_rt, i=2; // variables
    bool flag = true; // Initialize flag
    
    printf("Please enter the number to find if it is prime number or not: ");
    scanf("%d", &num); // take input number
    
    sq_rt = sqrt(num); // find square root
    
    if(num == 0 | num == 1)
    {
        printf("\nThe number %d is neither prime nor composite!", num);
    }
    else
    {
        while(i < sq_rt) // loop
        {
            if(num%i == 0)
            {
                flag = false; // if composite then flag turns to FALSE
                break;
                
            }
            i++;
            
        }
        
        if(flag==true) // check the status of the flag and display accordingly
        {
            printf("The number %d is a prime number.", num);
            
        }
        else
        {
            printf("The number %d is not a prime number.", num);
            
        }
        
    }

    return 0;
}

