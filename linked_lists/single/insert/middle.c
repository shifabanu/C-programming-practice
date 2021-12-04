/******************************************************************************

Insert a node in the middle of a given linked list 

Step 1: Create a new node in the memory using malloc function.
Step 2: Traverse to the node where you want to insert. ie if you want to insert
        between 2 and 3, stop at 2.
Step 3: Point the new->link to the next node ie. node 3.
Step 4: Point the current node->link to the new node.

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
    
    // traverse until we match the desired value suppose node.i=2
    
    // create a temp pointer to traverse and store the node's pointer
    struct node* temp = head;
    
    while(temp->i != 2)
    {
        temp=temp->link;
    }
    
    // after completion of this while loop, we'll get the node whose 
        // value is equal to 2
        
    // new link points to the node after node 2 i.e node 3 
    new->link = temp->link;

    // node 2 -> link points to our newly created node
    
    temp->link = new;
    

    return 0;
}
