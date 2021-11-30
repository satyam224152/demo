//WAP A PROGRAM SWAPPING OF TWO INTEGERS
#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("\nenter 2 number : ");
	scanf("%d%d",&a,&b);
	max = a;
	if(b>max){
		max=b;
	}
	
	printf("Largest no is %d",max);
	return 0;
	//output 
}
