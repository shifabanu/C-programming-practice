/***********************************************************************
Given a sorted array Arr of size N and a number X, you need to find the 
number of occurrences of X in Arr.

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 0
Explanation: 4 is not present in the
given array.
************************************************************************/

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int BinarySearch(int arr[], int n, int x)
	{
	    int min = 0, max = n-1, index;
	    while(min<=max)
	    {
	        index = (min+max)/2;
	        
	        if(arr[index]==x)
	        {
	            return index;
	        }
	        else if(arr[index]<x)
	        {
	           min = index+1; 
	        }
	        else
	        {
	            max = index-1;
	        }
	    }
	    return -1;
	}
	
	int count(int arr[], int n, int x) {
	    
	   int count=0, index;
	    
	     // If x is at arr[0]
	     
	    if(x==arr[0] && x!=arr[n-1])
	    {
	        count=0;
	       for(int i=0; i<n; i++)
	       {
	           if(x==arr[i])
	           {
	               count++;
	           }
	       }
	       return count;
	    }
	    
	    //If x is at arr[n-1]
	    
	    else if(x==arr[n-1] && x!=arr[0])
	    {
	        count=0;
	       for(int i=n-1; i>=0; i--)
	       {
	           if(x==arr[i])
	           {
	               count++;
	           }
	       }
	       return count;
	    }
	    
	    //If x is at arr[0] and arr[n-1]
	    
	    else if(x==arr[0] && x==arr[n-1])
	    {
	        count = n;
	        return count;
	    }
	    
	    //If x is in the middle of the array somewhere
	    
	    else
	    {
	        count=0;
	        index = BinarySearch(arr, n, x);
	        if(index==-1)
	        {
	            count=0;
	            return count;
	        }
	        else
	        {
	            // Check on the left side of the found index
	           for(int l = index; l>=0; l--)
	           {
	               if(arr[l]==x)
	               {
	                   count++;
	               }
	           }
	           
	           index=index+1;
	           
	           // Check on the right side of the found index
	           for(int l = index; l<n; l++)
	           {
	               if(arr[l]==x)
	               {
	                   count++;
	               }	               
	           }
	           return count;
	        }
	    }
	    
	}
};   
