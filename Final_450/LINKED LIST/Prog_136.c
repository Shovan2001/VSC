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

struct node *intersection_of_2LL(struct node *head1,struct node *head2)
{
    struct node *temp1=NULL;
    struct node *temp2=NULL;
    temp1=head1;
    temp2=head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data==temp2->data)
        {
            printf("%d ",temp1->data);
            temp1=temp1->next;
            temp2=temp2->next;
        }

        else if(temp1->data>temp2->data)
        {
            temp2=temp2->next;
        }
        else
        temp1=temp1->next;
    }
    
    
}

int main()
{
    int n1,n2;
    struct node *head1=NULL;
    struct node *head2=NULL;
    
    printf("Enter the value of N1\n");
    scanf("%d",&n1);
    printf("Enter the value of N2\n");
    scanf("%d",&n2);
    
    head1=create(n1,head1);
    printf("\n");

    head2=create(n2,head2);
    printf("\n");

    printf("Linked list 1:\n");
    display(head1);

    printf("Linked list 2:\n");
    display(head2);

    printf("Intersection of Linked list:\n");
    intersection_of_2LL(head1,head2);

}