// C function to find maximum in arr[] of size n
int largest(int arr[], int n) 
{
    int max = 0; // for comparing the first element in the array
    for(int i = 0; i < n; i++) // iterate over the array
    {
       if(arr[i] > max) // compare the values of two elements
       {
          max = arr[i]; // store the maximum value
       }
    }
    return max; // return the maximum integer value
}
