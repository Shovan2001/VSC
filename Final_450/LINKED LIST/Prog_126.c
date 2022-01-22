//Reverse a Single Linked List
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

struct node *reverse(struct node *head)
{
    temp=head;
    temp1=temp->next;
    temp->next=NULL;
    while(temp1!=NULL)
    {
        head=temp1;
        temp1=temp1->next;
        head->next=temp;
        temp=head;
    }
    return head;
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

    printf("Reversed Linked list:\n");
    head=reverse(head);
    display(head);
}