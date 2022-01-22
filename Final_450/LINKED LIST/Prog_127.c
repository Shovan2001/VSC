//Reverse a Linked List in groups of given size. 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*temp,*temp1;

struct node* create(int n,struct node*head)
{
	do{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the value\t");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			temp1=head;
		}
		else
		{
			temp1->next=temp;
			temp1=temp;
		}
	  }while(--n);
	   return head;
}

void display(struct node *head)
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct node *reverse_by_k_nodes(int k,struct node *head)
{
    struct node *current = head;
    struct node *next = NULL;
    struct node *prev = NULL;
    int count = 0;
   
     /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
     
    /* next is now a pointer to (k+1)th node
       Recursively call for the list starting from current.
       And make rest of the list as next of first node */
    if (next !=  NULL)
       head->next = reverse_by_k_nodes(k,next);
 
    /* prev is new head of the input list */
    return prev;
}

int main()
{
    int n,k;
    struct node *head=NULL;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("Enter the value of k\n");
    scanf("%d",&k);
    head=create(n,head);
    printf("\n");

    printf("Original Linked list:\n");
    display(head);

    head=reverse_by_k_nodes(k,head);
    
    printf("Reversed Linked list:\n");
    display(head);
}