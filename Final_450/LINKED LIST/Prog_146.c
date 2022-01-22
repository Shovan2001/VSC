//Find pairs with given sum in a sorted DLL 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
}*temp,*temp1;
int count=0;

struct node* create(int n,struct node*head)
{
	do{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the value\t");
		scanf("%d",&temp->data);
		temp->next=NULL;
		temp->prev=NULL;
		if(head==NULL)
		{
			head=temp;
			temp1=head;
		}
		else
		{
			temp1->next=temp;
			temp->prev=temp1;
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


int main()
{
    int n,x;
    struct node *head=NULL;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    
    printf("Enter the value of X\n");
    scanf("%d",&x);
    head=create(n,head);
    printf("\n");

    printf("Original Linked list:\n");
    display(head);

    struct node *start=NULL;
    struct node *end=NULL;

    start=head;
    end=head;
    while(end->next!=NULL)
    {
        end=end->next;
    }

    printf("Required pairs are:\n");
    while(start!=NULL && end!=NULL && start!=end && end->next!=start)
    {
        if((start->data+end->data)==x)
        {
            printf("%d,%d\t",start->data,end->data);
            start=start->next;
            end=end->prev;
        }
        else 
        {
            if((start->data+end->data)>x)
            end=end->prev;

            if((start->data+end->data)<x)
            start=start->next;
        }
    }
}
