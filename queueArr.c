#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<malloc.h>
#define size 5
int queue[size];
int rear=-1,front=-1;
void enqueue(int data);
void dequeue();
void display();
void peek();
void sumEven_Odd();
void main()
{
    int ch=0,data=0,even=0,odd=0;
	do{
		printf("\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n5.Exit\n6.Sum of even and odd elements\nEnter your choice");
        scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter data: ");
                scanf("%d",&data);
                enqueue(data);
				break;
			case 2:dequeue();
				break;
			case 3:peek();
				break;
			case 4:display();
				break;
			case 5:exit(0);
            case 6:sumEven_Odd();
                break;
			default: printf("\nWrong choice");
				break;
		}
	}while(1);
}
void enqueue(int data)
{
    if(rear==size-1){printf("\nQueue Overflow");}
    else if(front==-1)
    {
        printf("test");
        front++;
        printf("%d",front);
        rear++;
        queue[rear]=data;
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front>rear || front==-1){printf("\nQueue Underflow");}
    else
    {
        front++;
    }
}
void display()
{
    if(front>rear || front==-1)
    {
        printf("\nQueue Underflow");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
    
}
void peek()
{
   if(front>rear || front==-1)
    {
        printf("\nQueue Underflow");
    }
    else
    {
        printf("\n%d",queue[front]);
    }
}
void sumEven_Odd()
{
    int even=0 ,odd=0;
    if(front>rear || front==-1)
    {
        printf("\nQueue Underflow");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            if(queue[i]%2==0){even+=queue[i];}
            else{odd+=queue[i];}
        }
    }
    printf("\nThe sum of even numbers in the stack is:%d",even);
    printf("\nThe sum of odd numbers in the stack is:%d",odd);
    
}

