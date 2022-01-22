//Remove Duplicates in a sorted Linked List.
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*temp,*temp1,*temp2;

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

struct node* duplicates(struct node *head)
{
    temp=head;
    temp1=temp->next;
    temp2=temp->next;
    while(temp1!=NULL)
    {
        if(temp->data==temp1->data)
        {
            temp2=temp2->next;
            temp->next=temp2;
            free(temp1);
            temp1=temp2;
        }
        else
        {
            temp=temp->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return head;
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

    head=duplicates(head);

    printf("Linked list without duplicates;\n");
    display(head);
}