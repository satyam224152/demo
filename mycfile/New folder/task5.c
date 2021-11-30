//WAP to print square of number only if value is not 5
#include<stdio.h>
void main()
{
	int a,sq;
	printf("enter no to get square :");
	scanf("%d",&a);
	if (5==!a)
	{
		sq=a*a;
		printf("\nsquare of : %d",sq);
	}
}
