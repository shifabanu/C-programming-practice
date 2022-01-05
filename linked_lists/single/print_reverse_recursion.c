/******************************************************************************

Print the contents of the single linked list in the reverse order 
using Recursion technique

Step 1: Create a function that takes a pointer to the node as a parameter
Step 2: In the function, check the validity of the pointer
Step 3: Pass the next node's address as an argument to when calling the same
        function. This will go until the end of the list
Step 4: After the function call returns, the next step is to print the contents.
Step 5: Thus, the last stack will have the information required to print the
        contents of that particular node. 

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
        print_the_list(p->next);
        printf("%d", p->value);
    }
}


int main()
{
    // assume the linked list is already created
    
    // call the function 
    
    print_the_list(head);

    return 0;
}
