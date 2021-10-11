/*****************************************************
As we know, Ishaan has a love for chocolates. 
He has bought a huge chocolate bar that contains N chocolate squares. 
Each of the squares has a tastiness level which is denoted by an array A[].
Ishaan can eat the first or the last square of the chocolate at once. 
Ishaan has a sister who loves chocolates too and she demands the last chocolate square. 
Now, Ishaan being greedy eats the more tasty square first. 
Determine the tastiness level of the square which his sister gets.

â€‹Input : arr[ ] = {5, 3, 1, 6, 9}
Output : 1
Explanation:
Initially: 5 3 1 6 9
In first step: 5 3 1 6
In Second step: 5 3 1
In Third step: 3 1
â€‹In Fourth step: 1
â€‹â€‹Return 1

Input : arr[ ] = {5, 9, 2, 6} 
Output :  2
******************************************************/

int chocolates(int arr[], int n)
{
    // Complete the function
    /*int last= arr[n-1], first= arr[0], min=arr[1], i;
    
    for(i=1; i<n-1; i++)
    {
       if(arr[i]<min)
       {
           min= arr[i];
       }
    }*/
    
    int min=arr[0], i;
      
    for(i=0; i<n; i++)
    {
       if(arr[i]<min)
       {
           min= arr[i];
       }
    }
    return min;
    
}
