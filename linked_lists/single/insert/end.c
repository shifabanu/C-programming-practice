/******************************************************************************

Insert a node in the end of a given linked list 

Step 1: Create a new node in the memory using malloc function
Step 2: Traverse to the last node and stop where you need to insert
Step 3: Point last node's -> new node's pointer
Step 4: Point new node -> NULL

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
    
    // traverse until the last node
    // NOTE: Do not go beyond that node just get the last node's pointer
    
    // create a temp pointer to traverse and store the last node's pointer
    struct node* temp = head;
    
    while(temp->link != \0)
    {
        temp=temp->link;
    }
    
    // after completion of this while loop, we'll get the last node whose 
        // link points to the NULL
    
    // let the temp->link point to the new node that we want to insert
    temp->link =  new;
    
    new->link = NULL; // OR you can even write as \0 instead of NULL
    

    return 0;
}
