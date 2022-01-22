//Double Linked List All
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

struct node* search(int n,struct node*head)
{
	temp=head;
	temp1=head->next;
	while(temp1!=NULL)
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
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the value\t");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}

int main()
{
	struct node*head=NULL;
	int i,n,ch;
	char ch1;
	do
	{	
		printf("\nEnter 1 to create a list\n");
		printf("Enter 2 to insert an element\n");
		printf("Enter 3 to delete an element\n");
		printf("Enter 4 to dispaly the list\n");
		printf("Enter 5 to count the number of nodes\n");
		printf("Enter 6 to reverse the list\n");
		printf("Enter 7 to search an element list\n");
		printf("Enter 8 to exit\n");
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
						head->prev=temp;
						head=temp;
						
						break;
					
					case 'b':
						count++;
						temp=create_node();
						temp1=head;
						while(temp1->next!=NULL)
							temp1=temp1->next;
						temp1->next=temp;
						temp->prev=temp1;
						temp1=temp;
						break;
				
					case 'c':
						
						printf("enter the value of n\n");
						scanf("%d",&n);
						if(n>=1 && n<=count+1)
						{
							
	
							temp=create_node();
							temp1=head;
							if(n==1)
							{
								temp->next=head;
								head->prev=temp;
								head=temp;
								count++;
								break;
							}	
							if(n==(count+1))
							{
								
								while(temp1->next!=NULL)
									temp1=temp1->next;
								
							}	
							else
							{	
							
								for(i=1;i<n-1;i++)
									temp1=temp1->next;
								temp->next=temp1->next;
							}
								temp1->next=temp;
								temp->prev=temp1;
								temp1=temp;
								count++;
							
						}
						else
						printf("invalid postion\n");
						break;
				
					case 'd':
						printf("enter the value of n\n");
						scanf("%d",&n);
						
						if(head->data==n)
						{
							temp=create_node();
							temp1=head;
							temp->next=head->next;
							temp1->next=temp;
							temp->next->prev=temp;
							temp->prev=temp1;
							count++;
							break;
						}
						temp1=search(n,head);
						if(temp1->next!=NULL)
						{
							if(temp1->next->next!=NULL)
							{
								temp=create_node();
								temp->next=temp1->next->next;
								temp1->next->next=temp;
								temp1->next->next->prev=temp;
								temp->prev=temp1->next;
							}
							else
							{
								temp=create_node();
								temp1->next->next=temp;
								temp->prev=temp1->next;
							} 
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
							temp=create_node();
							temp->next=head;
							head->prev=temp;
							head=temp;
							count++;
							break;
						}
						temp1=search(n,head);
						if(temp1->next!=NULL)
						{
							temp=create_node();
							temp->next=temp1->next;
							temp1->next=temp;
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
						temp=head;
						head=head->next;
						free(temp);
						head->prev=NULL;
						count--;
						break;
					
					case 'b':
						temp=head;
						for(i=1;i<count-1;i++)
						temp=temp->next;
						temp1=temp->next;
						temp->next=NULL;
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
							free(temp);
							head->prev=NULL;
							count--;
							break;
						}
						temp=search(n,head);
						if(temp->next!=NULL)
						{
							temp1=temp->next;
							temp->next=temp1->next;
							if(temp1->next!=NULL)
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
						if(head->next==NULL && head->data==n)
							printf("no node exists after n\n");
						
						else if(head->data==n && head->next->next==NULL)
						{
							temp=head->next;
							head->next=NULL;
							free(temp);
							count--;
							break;
						}

						else if(head->data==n && head->next!=NULL)
						{
							temp=head->next;
							temp1=head->next->next;
							head->next=temp1;
							temp1->prev=head;
							free(temp);
							count--;
						}
						
						else
						{

							temp1=search(n,head);
							if(temp1->next!=NULL)
							{
								if(temp1->next->next!=NULL)
								{
									temp1=temp1->next;
									if(temp1->next->next!=NULL){
									temp=temp1->next;
									temp1->next=temp->next;
									temp->next->prev=temp1;}
									else{
									temp=temp1->next;
									temp1->next=NULL;}
									free(temp);
									count--;
									break;
									
								}
								else
								printf("no node exists after n\n");
							}
							else
							printf("Node doesnot exist\n");
						}
						break;
				
					case 'e':
						printf("enter the value of n\n");
						scanf("%d",&n);
						if(n==head->data)
						{
							printf("no node exists before\n");
							break;
						}
						if(head->next->data==n)
						{
							temp1=head;
							head=head->next;
							head->prev=NULL;
							free(temp1);
							count--;
							break;
						}
						else
						{
							temp1=search(n,head);
							if(temp1->next!=NULL)
							{
								temp1->next->prev=temp1->prev;
								temp1->prev->next=temp1->next;
								free(temp1);
								count--;
							}
						
							else
							printf("Node doesnot exist\n");
						}
						break;
				
					default:printf("Wrong choice\n");
				}
				if(count==0)
				head=NULL;
				break;

			
			case 4:
				printf("linked list=\n");
				temp=head;
				while(temp!=NULL)
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
					temp = NULL;  
       				        temp1= head;  
  
				        while (temp1 != NULL)  
				        {  
				            temp = temp1->prev;  
	        			    temp1->prev = temp1->next;  
	       				    temp1->next = temp;  
	       				    temp1 = temp1->prev;  
	   			        }  
	  	
        
				        if (temp != NULL) 
				        {  
				            head = temp->prev;  
				        }  
                }
				break;

			case 7:
				if(head==NULL)
				{
					printf("List doesnot exist\n");
					printf("Create a list first\n");
				}
				else
				{
		
					printf("enter the element to search\n");
					scanf("%d",&n);
					temp=search(n,head);
					if(temp->next!=NULL)
					printf("Node exists\n");
					else
					printf("node doesnot exist\n");
				}
				
				break;

			case 8:
				break;
			
			default:printf("Wrong choice\n");	
		}
	}while(ch!=8);
}	