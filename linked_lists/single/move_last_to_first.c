/******************************************************************************

Write a code to move the last node of a single linked list to the first node
of that list

Step 1: Create a function that takes the pointer head and returns a node pointer
Step 2: Check the assumption that we have at least 2 nodes in the list
Step 3: Initialize two node pointers for iterating over the whole list
Step 4: Run a while loop and check the validity of the next pointer
Step 5: Make the pointers point to the next nodes accordingly
Step 6: Stop at the last node and the node before
Step 7: Change the values accordingly



*******************************************************************************/

#include <stdio.h>

typedef struct node
{
    int value;
    struct node *next;
}NODE;

NODE *move(NODE *head)
{
    // check the assumptions
    // the list has at least 2 nodes
    // if we only have 1 node; last & first are same
    // we return the same node
    
    if(!head || !head->next)
    {
        return head;
    }
    
    // this means we have at 2 nodes
    NODE *p, *q;
    
    // Initialize the pointer variables
    p = head;
    q = NULL;
    
    // use p to reach until the end of the list
    // use q to stop a node before the end
    
    while(p->next)
    {
        q = p;
        p = p->next;
    }
    
    // make q->next node point to NULL
    // make p->next node point the head i.e previously our first node
    // make head point to the p node
    
    q->next = NULL;
    p->next = head;
    head = p; 
    
    return head;
    
    
}

int main()
{
    // assume that the structure is already given to us
    // we will concentrate on the function
    

    return 0;
}
