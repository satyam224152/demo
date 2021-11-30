//WAP to print square of a number only if value is equals to 5
#include<stdio.h>
void main()
{
	int a,sq;
	printf("enter no to get square :");
	scanf("%d",&a);
	if (a==5)
	{
		sq=a*a;
		printf("\nsquare of : %d",sq);
	}
}
