/******************************************************************************


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char string[100], reverse[100], tmp;
    int len, flag;
    
    
    printf("\nEnter the string: ");
    scanf("%s", string);
    printf("You entered: %s", string);
    
    len = strlen(string);
    printf("\nLength = %d", len);
    
/* Length can also be found:
    
    int i=0
    while(string[i] != '\0')
    {
        i++;
    }
    
    // Your i becomes the length of the string
*/

    // Reverse the string
    
 /*   for(int i=0; i<len; i++)
    {
        reverse[len-1-i] = string[i];
    }
    printf("\nThe reversed string is: %s", reverse);
   */
   
    for(int i=0; i<len; i++)
    {
        reverse[i] = string[i];
    }
    
    for(int i=0; i<=(len-1)/2; i++)
    {
        tmp = reverse[i];
        reverse[i] = reverse[len-1-i];
        reverse[len-1-i] = tmp;
    }
    
    printf("\nThe reversed string is: %s", reverse);
    
    // Compare the string
    
    flag = strcmp(string, reverse);
    
    if(flag == 0)
    {
        printf("\nThe strings are Palindrome");
    }
    else
    {
        printf("\nThe strings are not Palindrome");
    }
    

    return 0;
}
