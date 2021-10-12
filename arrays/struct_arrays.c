/*********************************************
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};


function must return the maximum Height
return the height in inches
**********************************************/

int findMax(struct Height arr[], int n)
{
    int height=0, max = (arr[0].feet*12) + arr[0].inches;
    
    for(int i=0; i<n; i++)
    {
        height = (arr[i].feet*12) + arr[i].inches;
        
        if(height>max)
        {
            max = height;
        }
    }
    
    return max;
    
}
