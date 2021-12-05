/******************************************************************************
Delete a node in the end of a given linked list

Step 1: Check if there are 0 (empty list) or 1 (single node in the list) node. 
        Handle these cases separately.
Step 2: Else do the required tasks.
Step 3: Create a temp pointer to point to the head.
Step 4: Traverse the list and reach the second last node ( a node before to be 
        deleted) i.e. if you wanna delete the 4th node (last in the list) then 
        stop at the 3rd node.
Step 5: Free the last node.
Step 6: Point the second last node to NULL. 
*******************************************************************************/

#include <stdio.h>

struct node
{
    int i; // value
    struct node* link; // pointer to the next node
}

int main()
{
    // check the assumptions first
    // assume that we are already given the head node and other nodes
    
    if(head==NULL)
    {
        // the list is empty
        return 0;
    }
    else if(head->link==NULL)
    {
        // only 1 node in the list
        free(head); // clear that 1 node
        head=NULL; // the list is now empty
        return 1;
    }
    else
    {
        // we have more than 1 node
        struct node* temp = head; // create a temp pointer to structure
        
        // traverse until the second last node
        while(temp->link-> != NULL)
        {
            temp = temp->link; // goto next node
        }
        
        // we'll get the second last node in temp after while loop ends
        
        free(temp->next); // clear the last node
        temp->next = \0; // set the link to NULL 
    }

    return 0;
}
