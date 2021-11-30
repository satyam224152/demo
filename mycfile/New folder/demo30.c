#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("\nenter 3 number : ");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	printf("Largest no is %d",max);
	return 0;
}
