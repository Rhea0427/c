/*
OBJECTIVE:To create multiple stack and perform PUSH and POP operations on each Stack.
NAME:Rhea Kanchan
USN:18BBTCS102
FUNCTIONS USED:main push pop display
DATE:12/09/2019
OUTPUT:
1.Push
2.Pop
3.Display
4.Exit
Choice:1
enter a number:2
Press 1 to push in stack 1 or 2 for stack 2:1
1.Push
2.Pop
3.Display
4.Exit
Choice:1
enter a number:1
Press 1 to push in stack 1 or 2 for stack 2:1
1.Push
2.Pop
3.Display
4.Exit
Choice:1
enter a number:3
Press 1 to push in stack 1 or 2 for stack 2:2
1.Push
2.Pop
3.Display
4.Exit
Choice:2
Press 1 to push in stack 1 or 2 for stack 2:1
Element is successfully popped from stack
1.Push
2.Pop
3.Display
4.Exit
Choice:3
Elements of stack 1 are:2
Elements of stack 1 are:3
1.Push
2.Pop
3.Display
4.Exit
Choice:4
Exiting from Program
*/

#include<stdio.h>
#define max 10
int top1,top2,arr[max],b1,b2;
void push();
void pop();
void display();
void main()
	{
	int ch;
	top1=b1=-1,top2=b2=max-1/2;
	do
		{
		printf("\n 1:push \n 2:pop\n3:display\n4:exit\nchoice:");
		scanf("%d",&ch);
		switch(ch)
			{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:printf("exiting from program");
			break;
			default:printf("wrong choice\n");
			break;
			}
		}
	while(ch!=4);
	}
void push()
	{
	int x,n,ch;
	printf("enter a number:\n");
	scanf("%d",&ch);
	printf("\n press 1 to push in stack 1 or press 2 for stack 2:");
	scanf("%d",&ch);
	if(ch==1)
		{
		if(top1==b2)
			{
			printf("stack overflow\n");
			return;
			}
		else
		arr[++top1]=x;
		}
	if(ch==2)
		{
		if(top2==n-1)
			{
			printf("stack overflow\n");
			return;
			}
		else
		arr[++top1]=x;
		}
	}
void pop()
	{
	int y,ch;
	printf("\n press 1 to pop from stack 1 or press 2 for stack2");
	scanf("%d",&ch);
	if(ch==1)
		{
		if(top1==-1)
			{
			printf("stack underflow\n");
			return;
			}
		y=arr[top1];
		arr[top1--]=0;
		}
	else
		{
		if(top2==b2)
			{
			printf("stack underflow\n");
			return;
			}
		y=arr[top2];
		arr[top2--]=0;
		}
	printf("\n %d element is successfully popped from the stack\n",y);
	return;
	}
void display()
	{
	int i;
	if(top1==-1)
		{
		printf("stack 1 is empty\n");
		}
	else
		{
		printf("elements of stack 1 are:\n");
		for(i=0;i<=top1;i++)
			{
			printf("%d\n",arr[i]);
			}
		}
	if(top2==b2)
		{
		printf("stack2 is empty\n");
		}
	else
		{
		printf("elements of stack2 are:\n");
		for(i=b2+1;i<=top2;i++)
			{
			printf("%d\n",arr[i]);
			}
		}
	return;
}		

