/****************************************************************
Given an array of even size N, task is to find minimum value that 
can be added to an element so that array become balanced. An array 
is balanced if the sum of the left half of the array elements is 
equal to the sum of right half.

N = 4
arr[] = {1, 5, 3, 2}
Output: 1
Explanation: 
Sum of first 2 elements is 1 + 5  = 6, 
Sum of last 2 elements is 3 + 2  = 5,
To make the array balanced you can add 1.

Input:
N = 6
arr[] = { 1, 2, 1, 2, 1, 3 }
Output: 2
Explanation:
Sum of first 3 elements is 1 + 2 + 1 = 4, 
Sum of last three elements is 2 + 1 + 3 = 6,
To make the array balanced you can add 2.

****************************************************************/
int minValueToBalance(int a[], int n)
    {
       int sum1=0, sum2=0, i, j= 1 + (n-1)/2;
  
       for(i=0; i<=(n-1)/2; i++)
       {
          sum1= sum1+ a[i];
       }

       for(j; j<n; j++)
       {
          sum2= sum2+ a[j]; 
       }
       
       if(sum1>sum2)
       {
           return (sum1-sum2);
       }
       else
       {
           return (sum2-sum1);
       }
       
    }
