/******************************************************************************

Insert a node in the beginning of a given linked list 

Step 1: Create a new node in the memory using malloc function
Step 2: Make the new -> link point to the head i.e the first element in given
        list
Step 3: Make the head point to the new.

*******************************************************************************/

#include <stdio.h>

struct node
{
    int i; // value
    struct node* link; // pointer to the next node
}

int main()
{
    // new node in heap memory
    // reserve a space equal to the size of our structure node
    struct node* new = struct node* malloc(sizeof(struct node));
    
    new->i = 5 // assign a random value
    
    // assume that we are already given the head node and other nodes
    
    // now we point new.link to the head of first node
    new->link= head;
    
    // we replace the head to our new node
    
    head=new;

    return 0;
}
