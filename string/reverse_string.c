/******************************************************************************


*******************************************************************************/

#include <stdio.h>
#include <string.h>


int main()
{
    char string[100], tmp;
    int i,len=0;
    
    printf("Enter the string: ");
    scanf("%s", string);
    
    while(string[len]!='\0')
    {
        len++;
        // printf("%d",len);
    }
    printf("\nThe length of the string is: %d",len);
    
   
    for(i=0; i<=(len-1)/2; i++)
    {
        tmp = string[i];
        string[i] = string[len-1-i];
        string[len-1-i] = tmp;
    }
    
    printf("\nThe reversed string is: %s", string);

    return 0;
}


