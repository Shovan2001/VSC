//circular linked list all
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
		temp->next=temp;
		temp->prev=temp;
		if(head==NULL)
		{
			head=temp;
			temp1=head;
		}
		
		else
		{
			temp1->next=temp;
			temp->prev=temp1;
			head->prev=temp;
			temp->next=head;
			temp1=temp;
		}
		
		
	  }while(--n);
		
	   return head;
}

struct node* search(int n,struct node*head)
{
	temp=head;
	temp1=head->next;
	while(temp1!=head)
	{
		if(n==temp1->data)
			return temp;
		temp=temp->next;
		temp1=temp1->next;
	}
	return temp;
}

struct node* create_node()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the value\t");
	scanf("%d",&temp->data);
	temp->next=temp;
	temp->prev=temp;
	return temp;
}

int main()
{
	struct node*head=NULL;
	int i,n,ch;
	char ch1;
	do
	{	
		printf("Enter 1 to create a list\n");
		printf("Enter 2 to insert an element\n");
		printf("Enter 3 to delete an element\n");
		printf("Enter 4 to dispaly the list\n");
		printf("Enter 5 to count the number of nodes\n");
		printf("Enter 6 to search an element list\n");
		printf("Enter 7 to exit\n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				if(head!=NULL)
				{
					printf("List already exists\n");
					break;
				}
				printf("Enter 'a' to create a list of n nodes\n");
				printf("Enter 'b' to create based on users choice\n");
				printf("Enter choice\n");
				scanf("%s",&ch1);
			
				switch(ch1)
				{
					case 'a':
						printf("Enter the value of n\n");
						scanf("%d",&n);
						head=create(n,head);
						count=count+n;
						printf("\n");
						break;

					case 'b':
						do{
							head=create(1,head);
							count++;
							printf("Want to create a node?(Y/N)\n");
							scanf("%s",&ch1);
						    }while(ch1=='Y');
						printf("\n");
						break;
				
					default:printf("Wrong choice\n");
				}
				break;


			case 2:if(head==NULL)
				{
					printf("List doesnot exist\n");
					printf("Creating a list\n");
					head=create(1,head);
					count++;
				}
				printf("Enter 'a' to insert at the beginning\n");
				printf("Enter 'b' to insert at the end\n");
				printf("Enter 'c' to insert at the nth position\n");
				printf("Enter 'd' to insert after the node having value n\n");
				printf("Enter 'e' to insert before the node having value n\n");
				printf("Enter choice\n");
				scanf("%s",&ch1);
			
				switch(ch1)
				{
					case 'a':
						count++;
						temp=create_node();
						temp->next=head;
						temp->prev=head->prev;
						temp->prev->next=temp;
						head->prev=temp;
						head=temp;
						
						break;
					
					case 'b':
						count++;
						temp=create_node();
						temp->next=head;
						temp->prev=head->prev;
						temp->prev->next=temp;
						head->prev=temp;
						break;
				
					case 'c':
						
						printf("enter the value of n\n");
						scanf("%d",&n);
						if(n>=1 && n<=count+1)
						{
							
	
							
							
							if(n==1)
							{
								count++;
								temp=create_node();
								temp->next=head;
								temp->prev=head->prev;
								temp->prev->next=temp;
								head->prev=temp;
								head=temp;
								break;
							}	
							if(n==(count+1))
							{
								
								temp=create_node();
								temp->next=head;
								temp->prev=head->prev;
								temp->prev->next=temp;
								head->prev=temp;
								count++;
								break;
							}	
							else
							{
								temp=create_node();
								temp1=head;	
								for(i=1;i<n-1;i++)
									temp1=temp1->next;
								temp->next=temp1->next;
								temp1->next=temp;
								temp->prev=temp1;
								temp1=temp;
								count++;
							}
							
						}
						else
						printf("Invalid postion\n");
						break;
				
					case 'd':
						printf("enter the value of n\n");
						scanf("%d",&n);
						
						temp=head->next;
						while(temp!=head)
						{
							if(temp->data==n)
							break;
							temp=temp->next;
						}
						if(temp->data==n)
						{
							
							temp1=create_node();
							temp1->next=temp->next;
							temp1->prev=temp;
							temp->next->prev=temp1;
							temp->next=temp1;
							count++;
						}
						
						else
						printf("Node doesnot exist\n");
						break;
					
					case 'e':
						printf("enter the value of n\n");
						scanf("%d",&n);
						if(head->data==n)
						{
							count++;
							temp=create_node();
							temp->next=head;
							temp->prev=head->prev;
							temp->prev->next=temp;
							head->prev=temp;
							head=temp;
							break;
						}
						temp1=search(n,head);
						if(temp1->next->data==n)
						{
							temp=create_node();
							temp->next=temp1->next;
							temp1->next=temp;
							temp->next->prev=temp;
							temp1->next->prev=temp1;
							count++;
						}
						else
							printf("Node doesnot exist\n");
						break;
						
					
					default:
						printf("Wrong choice\n");
				}
				break;
		

			case 3:if(head==NULL)
				{
					printf("List doesnot exist\n");
					break;
				}
				printf("Enter 'a' to delete at the beginning\n");
				printf("Enter 'b' to delete at the end\n");
				printf("Enter 'c' to delete node having value n\n");
				printf("Enter 'd' to delete after the node having value n\n");
				printf("Enter 'e' to delete before the node having value n\n");
				printf("Enter choice\n");
				scanf("%s",&ch1);
						
				switch(ch1)
				{
					case 'a':
						if(head->next==head)
						{	
							free(head);
							count--;
							break;
						}
						temp=head;
						head=head->next;
						head->prev=temp->prev;
						temp->prev->next=head;
						free(temp);
						count--;
						break;
					
					case 'b':
						if(head->next==head)
						{	
							free(head);
							count--;
							break;
						}
						temp=head;
						temp->prev=temp1;
						head->prev=temp1->prev;
						temp1->prev->next=head;
						free(temp1);
						count--;
						break;
				
					case 'c':
						printf("enter the value of n\n");
						scanf("%d",&n);
						if(head->data==n && count==1)
						{
							free(head);
							head=NULL;
							count--;
							break;
						}
						if(head->data==n)
						{
							temp=head;
							head=head->next;
							head->prev=temp->prev;
							temp->prev->next=head;
							free(temp);
							count--;
							break;
						}
						temp=search(n,head);
						if(temp->next!=head)
						{
							temp1=temp->next;
							temp->next=temp1->next;
							temp1->next->prev=temp;
							free(temp1);
							count--;
						}
						else
						printf("Node doesnot exists \n");
						break;
				
					case 'd':
						printf("enter the value of n\n");
						scanf("%d",&n);
						if(head->next==head && head->data==n)
						{
							printf("No node exists after n\n");
							break;
						}
						
						temp=search(n,head);
						temp=temp->next;
						if(temp->next==head)
						{
							printf("No node exists after n\n");
							break;
						}
						if(temp->data==n)
						{
							temp1=temp->next;
							temp->next=temp1->next;
							temp1->next->prev=temp;
							free(temp1);
							count--;
							break;
						}	
						else
							printf("Node doesnot exist\n");
							
						break;
				
					case 'e':
						printf("enter the value of n\n");
						scanf("%d",&n);
						if(head->next==head || head->data==n)
						{
							printf("No node exists before n\n");
							break;
						}
						temp=search(n,head);
						temp=temp->next;
						if(temp->prev==head)
						{
							if(head->next==head)
							{	
								free(head);
								count--;
								break;
							}
							temp=head;
							head=head->next;
							head->prev=temp->prev;
							temp->prev->next=head;
							free(temp);
							count--;
							break;
						}
						if(temp->data==n)
						{
							temp1=temp->prev;
							temp->prev=temp1->prev;
							temp1->prev->next=temp;
							free(temp1);
							count--;
							break;
						}							
						
						else
							printf("Node doesnot exist\n");
						
						break;
				
					default:printf("Wrong choice\n");
				}
				if(count==0)
				head=NULL;
				break;

			
			case 4:
				if(count==0)
				{
					printf("Linked list doesnot exist\n");
					break;
				}
				printf("linked list=\n");
				printf("%d\t",head->data);
				temp=head->next;
				while(temp!=head)
				{
					printf("%d\t",temp->data);
					temp=temp->next;
				}
				printf("\n");
				break;

			case 5:
				printf("total no of nodes=%d\n",count);
				break;

			case 6:
				if(head==NULL)
				{
					printf("List doesnot exist\n");
					printf("Create a list first\n");
				}
				else
				{
		
					printf("enter the element to search\n");
					scanf("%d",&n);
					if(head->data==n)
					{
						printf("node exists\n");
						break;
					}
					temp=search(n,head);
					if(temp->next!=head)
					printf("Node exists\n");
					else
					printf("node doesnot exist\n");
				}
				
				break;

			case 7:
				break;
			
			default:printf("Wrong choice\n");	
		}
	}while(ch!=7);
}	