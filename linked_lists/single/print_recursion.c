/******************************************************************************

Print the contents of the single linked list using Recursion technique

Step 1: Create a function that takes a pointer to the node as a parameter
Step 2: In the function, check the validity of the pointer
Step 3: Print the contents pointed by that node
Step 4: Pass the next node's address as an argument to when calling the same
        function

*******************************************************************************/

#include <stdio.h>
struct node
{
    int value;
    struct node *next;
}

void print_the_list( struct node *p)
{
    if(p)
    {
        printf("%d",p->value);
        print_the_list(p->next);
    }
}


int main()
{
    // assume the linked list is already created
    
    // call the function 
    
    print_the_list(head);

    return 0;
}
