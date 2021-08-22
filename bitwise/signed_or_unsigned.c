
#include <stdio.h>

int main()
{
    
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number == 0)
    {
        printf("Number is neither signed nor unsigned.");
    }
    else
    {
       if(number < 0)
        {
            printf("Number is signed");
            
        }
        else
        {
            printf("Number is unsigned");
            
        }
      
    }
    

    return 0;
}
