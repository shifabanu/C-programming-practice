/******************************************************************************
Delete a node in the middle of a given linked list whose value is 3. 

Step 1: Check if there are 0 (empty list) or 1 (single node in the list) node. 
        Handle these cases separately.
Step 2: Else do the required tasks.
Step 3: Create a temp pointer to point to the head.
Step 4: Traverse the list and reach a node before the desired node.
Step 5: Store the desired node's pointer in another temp pointer.
Step 6: Change the existing node's link.
Step 7: Clear the space of the node that we need to delete. 
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
        if(head->i=3)
        {
          free(head); // clear that 1 node          
          head=NULL; // the list is now empty
        }
        
        return 1;
    }
    else
    {
        // we have more than 1 node
        struct node* temp = head; // create a temp pointer to structure
        struct node* delete = temp; // we'll store the address of the node 
                                       // that we want to delete
        
        // traverse
        while(temp->link->i != 3)
        {
            temp = temp->link; // goto next node
        }
        
        // we'll stop at the node before the desired
        
        delete = temp->link; // store the address of desired node
        
        temp->link = delete->link; // change the temp pointer's link
        
        free(delete); // clear the contents of the delete node
    }

    return 0;
}
