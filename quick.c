/* 
OBJECTIVE:To perform sorting in a given list of numbers using quick sort
NAME:Rhea Kanchan
USN:18BBTCS102
DATE:5/9/2019
OUTPUT:
Enter size of array:4
Enter 4 elements:5 9 4 1
Sorted elements:1	4	5	9*/
#include<stdio.h>
void quicksort(int[10],int,int);
int main()
{
int x[20],size,i;
printf("Enter size of array:");
scanf("%d",& size);
printf("Enter %d elements:",size);
for(i=0;i<size;i++)
scanf("%d",& x[i]);
quicksort(x,0,size-1);
printf("Sorted elements:");
for(i=0;i<size;i++)
printf("%d \t",x[i]);
return 0;
}
void quicksort(int x[10],int first,int last)
{
int pivot,j,temp,i;
if(first<last)
	{
	pivot=first;
	i=first;
	j=last;
	while(i<j)
		{
		while(x[i]<=x[pivot] && i<last)
		i++;
		while(x[j]>x[pivot])
		j--;
		if(i<j)
			{
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
			}
		}
	temp=x[pivot];
	x[pivot]=x[j];
	x[j]=temp;
	quicksort(x,first,j-1);
	quicksort(x,j+1,last);
	}
}
	



