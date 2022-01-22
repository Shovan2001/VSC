// Implement Stack from Scratch
#include<stdio.h>
#include<stdlib.h>
int count=0,top=-1,n;
int isfull()
{
	if(count==n)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(count==0)
		return 1;
	else
		return 0;
}
void push(int *ar)
{
	top++;
	count++;
	printf("enter the element\n");
	scanf("%d",&ar[top]);
}
void pop(int *ar)
{
	count--;
	printf("Element Popped=%d",ar[top]);
	top--;
}
void peek(int *ar)
{
	printf("Element at the top=%d",ar[top]);
	printf("\n");
}

int main()
{
	int i,ch;
	printf("Enter the size of the stack\n");
	scanf("%d",&n);
	int *ar=(int*)malloc(n*sizeof(int));
	do
	{
		printf("\nEnter 1 to push\n");
		printf("Enter 2 to pop\n");
		printf("Enter 3 to peek\n");
		printf("Enter 4 to dispaly the stack\n");
		printf("Enter 5 to count the number of elements\n");
		printf("Enter 6 to exit\n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{

			case 1:
				if(isfull())
				printf("Stack Overflow\n");
				else
				push(ar);
				break;
		
			case 2:
				if(isempty())
				printf("Stack Underflow\n");
				else
				pop(ar);
				break;

			case 3:
				if(isempty())
				printf("No elements in the stack\n");
				else
				peek(ar);
				break;
			
			case 4:
				if((isempty())==1)
				printf("Stack is empty\n");
				else
				{
					printf("Stack=\n");
					for(i=top;i>=0;i--)
					printf("%d\n",ar[i]);
				}
				break;
	
			case 5:
				printf("Total number of elements in the stack=%d\n",count);
				break;
	
			case 6:
				break;
		
			default:printf("Wrong choice\n");
		
		}
	
	}while(ch!=6);
}