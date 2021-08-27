/******************************************************************************


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int num_is_Palindrome(int number)
{
   int reverse=0;
   int original= number;
   
   while(original != 0)
   {
      reverse = reverse*10 + original%10;
      original=original/10;
   }
   
   printf("The reversed number is: %d", reverse);
   
   if(number == reverse)
   {
       return 1;
   }
   else
   {
       return 0;
   }
   
  return 0;
}

int main()
{
    int number, flag;
    printf("Please enter a number to check whether it is a Palindrome or not: ");
    scanf("%d", &number);
    flag = num_is_Palindrome(number);
    if(flag == 1)
    {
        printf("\nThe number is a Palindrome");
    }
    else
    {
        printf("\nThe number is not a Palindrome");
    }
    return 0;
}
