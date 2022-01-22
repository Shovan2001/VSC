//Sort a LL of 0's, 1's and 2's
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

struct node *arrange(struct node *head)
{
    temp=head;
    int a[3]={0,0,0};
    while(temp!=NULL)
    {
        a[temp->data]++;
        temp=temp->next;
    }
    int i;
    i=0;
    temp=head;
    while(temp!=NULL)
    {
        if(a[i]==0)
        i++;
        else
        {
            temp->data=i;
            a[i]--;
            temp=temp->next;
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

    printf("Arranged Linked list:\n");
    head=arrange(head);

    display(head);
}