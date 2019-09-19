
/* 
OBJECTIVE:To perform sorting in a given list of numbers using quick sort
NAME:Rhea Kanchan
USN:18BBTCS102
DATE:5/9/2019
OUTPUT:
Enter the postfix expression:53*
Given postfix expn:53*
Result after evaluation:15
*/
#define size 50
#include<ctype.h>
#include<stdio.h>
int s[size];
int top=-1;
int push (int elem)
	{
	s[++top]=elem;
	}
int pop()
	{
	return(s[top--]);
	}
void main()
	{
	char pofx[50],ch;
	int i=0,op1,op2;
	printf("\n Enter the postfix expression:");
	scanf("%s",pofx);
	while((ch=pofx[i++])!='\0')
		{
		if(isdigit(ch)) push(ch-'0');
		else
			{
			op2=pop();
			op1=pop();
			switch(ch)
				{
				case'+':push(op1+op2);break;
				case'-':push(op1-op2);break;
				case'*':push(op1*op2);break;
				case'/':push(op1/op2);break;
				}
			}
		}
	printf("\n Given postfix expn: %s",pofx);
	printf("\n Result after evaluation:%d \n",s[top]);
	}
