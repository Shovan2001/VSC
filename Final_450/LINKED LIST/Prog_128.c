//Write a program to Detect loop in a linked list.
/*
slow=head;
fast=head;
while(slow!=NULL && fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow)
    return 1;
    else 
    return 0;
}
*/