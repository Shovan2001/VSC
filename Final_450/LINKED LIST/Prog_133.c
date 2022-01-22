//Write a Program to Move the last element to Front in a Linked List.
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*temp,*temp1, *s,*e;

struct node* create(int n,struct node*head)
{
	do
    {
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
	}
    while(--n);
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

int main()
{
    int n;
    struct node *head=NULL;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    head=create(n,head);
    printf("\n");

    printf("Original Linked list:\n");
    display(head);

    s=head;
    temp=head->next;
    temp1=temp;
    while(temp1->next->next!=NULL)
    {
        temp1=temp1->next;
    }
    e=temp1->next;
    
    temp1->next=s;
    s->next=NULL;
    e->next=temp;
    
    printf("Required Linked list:\n");
    display(e);
}