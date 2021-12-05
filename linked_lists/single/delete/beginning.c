/******************************************************************************
Delete a node in the beginning of a given linked list

Step 1: Check if there are 0 (empty list) or 1 (single node in the list) node. 
        Handle these cases separately.
Step 2: Else do the required tasks.
Step 3: Create a temp pointer to point to the head. (one which we want to delete)
Step 4: Point the head value to the 2nd node in the list.
Step 5: Clear the space where temp pointer is pointing to.
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
        head = head->link; // point head to the next node
        free(temp); // clear the 1st node
    }

    return 0;
}
