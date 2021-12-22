/******************************************************************************

Swap two consecutive nodes in a Single Linked List

Step 1: Create a function to Swap
Step 2: Check the assumptions if the given head node is valid and there are
        at least 2 nodes in the list (i.e head->next != NULL)
Step 3: Initialize 2 pointers to iterate over each node without loosing the
        head node.
Step 4: Take the head pointer and it's next pointer in the 2 created pointers
Step 4: In a while loop constantly check the next pointer's validity
Step 5: Swap like we always do using a temp variable using these 2 pointers
Step 6: Increment the pointers to the next ones



*******************************************************************************/

#include <stdio.h>

struct node
{
    int value;
    struct node *next;
}

void swap(struct node *head)
{
    // we are given the head of the node
    
    // checking the assumptions
    
    if(!head || !head->next)
    {
        return;
    }
    
    struct node *p, *q;
    int temp;
    p = head;
    q = head->next;
    
    // if q is not equal to NULL
    while(q)
    {
       // swap
       temp =  p->value;
       p->value = q->value;
       q->value =  temp;
       
       // increment the pointer values to point to the next nodes
       
       p = q->next;
       if(p!=NULL)
       {
           q = p->next;
       }
       else
       {
           q = NULL;
       }
    }
    return;
}

int main()
{
    // assume that we have already created a linked list
    
    // we'll directly focus on the function that swaps the 2 consecutive nodes
    return 0;
}
