//find middle element of linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*temp,*temp1;

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


struct node *middleNode(struct node *head) {
    if (head->next == NULL) {
        return head;
    }
    struct node *one = head, *two = head->next;
    while (two->next!=NULL)
    {
        if (two->next->next == NULL)
            break;

        two = two->next->next;
        one = one->next;
    }
    return one->next;
}
int main()
{
    int n;
    struct node *head=NULL;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    head=create(n,head);
    printf("\n");

    head=middleNode(head);

    printf("Middle element is:%d",head->data);
}