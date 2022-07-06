#include<stdio.h>
#include<stdlib.h>

int n=2,rear=-1,front=-1;
int queue[100];

int isfull()
{
	if(rear==n-1)
		return 1;
	else
		return 0;
}
{
	if(rear==front)
		return 1;
	else
		return 0;
}
void enqueue(int val)
{
	if(isfull())
		printf("\nOverflow");
	else
	{
		rear++;
		queue[rear]=val;
		printf("\n%d enqueued",queue[rear]);
	}
}
void dequeue()
{
	if(isempty())
		printf("\nUnderflow");
	else
	{
		printf("\n%d dequeued",queue[front+1]);
		queue[front]=-1;
		front++;
	}
}
void display()
{
	if(isempty())
		printf("\nEmpty queue");
	else
	{	
		printf("\nElements are: ");
		for(int i=front+1;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}
void findrear()
{
	printf("\nrear position=%d\nrear value=%d",rear,queue[rear]);
}

void queuereset()
{
	if(isempty() && isfull())
	{
		front=-1;
		rear=-1;
	}
}

void main()
{
	int ch,entry;
	int extern n;
	printf("Enter queue size");
	scanf("%d",&n);
	while(1)
	{
		printf("\n\n1:enqueue\n2:dequeue\n3:DISPLAY\n4:Is queue Empty\n5:Is queue Full\n6:Find rear\n7:Exit\nEnter your choice: ");
		scanf("%d",&ch);
		queuereset();
		switch(ch)
		{
			case 1:
			{
				printf("Enter data");
				scanf("%d",&entry);
				enqueue(entry);
				break;
			}
			
			case 2:
			{
				dequeue();
				break;
			}
			
			case 3:
			{
				display();
				break;
			}
			
			case 4:
			{
				if(isempty())
					printf("\nqueue is Empty");
				else
					printf("\nqueue is not Empty ");
				break;
			}
			
			case 5:
			{
				if(isfull())
					printf("\nqueue is Full");
				else
					printf("\nqueue is not Full ");
				break;
			}
			
			case 6:
			{
				findrear();
				break;
			}
			
			case 7:
			{
				printf("Exiting...");
				exit(0);
			}
			
			default:
			{
				printf("Invalid choice");
			}
		}
	}
}
