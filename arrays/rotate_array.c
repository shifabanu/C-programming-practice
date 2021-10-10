/******************************************************************************
To rotate an array by 'd' times from left to right

Step 1: Create a void function rotate array.
Step 2: Run a for loop for the number of rotations from 1 to d.
Step 3: Call the function inside the for loop to rotate the array once.
        (We will call this function 'd' times for 'd' number of rotations)
Step 4: Jump to the void rotation function and save the 0th element in a tmp variable.
Step 5: Shift the array to the left one by one using a for loop.
Step 6: Print the array.

*******************************************************************************/

#include <stdio.h>

void rotate_the_array(int array[], int n)
{
    int i, temp = array[0];
    for(i=0; i<n-1; i++)
    {
        array[i]=array[i+1];
    }
    
    array[n-1] = temp;
}

void Rotate_d_times(int array[], int d, int n)
{
    int i;
    for(i=0; i<d; i++)
    {
        rotate_the_array(array, n);
    }
}

int main()
{
    int d, i, array[8] = {1,2,3,4,5,6,7,8};
    printf("Enter the number of times you want to rotate the array: ");
    scanf("%d",&d);
    
    Rotate_d_times(array, d, 8);
    
    for(i=0; i<8; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
