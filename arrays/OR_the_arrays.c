/***********************************************************************
You are given an array arr[], you have to re-construct an array arr[].
The values in arr[] are obtained by doing OR(bitwise or) of 
consecutive elements in the array.

Step 1: Run a for loop and iterate
Step 2: Take the current and next element and OR them
Step 3: Store the result at the current index
Step $: If last element then store as it is.

*********************************************************************************/

int* game_with_number(int arr[], int n)
{
    int i;

        
        for(i=0; i<n-1; i++)
        {
            arr[i] = arr[i] | arr[i+1];
        }
        return arr;
    
    
    
}
