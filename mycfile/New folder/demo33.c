#include<stdio.h>
void main()
{
	float qty,rate,net,dis=0;
	printf("\nenter quantity : ");
	scanf("%f",&qty);
	printf("\nenter rate : ");
	scanf("%f",&rate);
	if(qty>=100)
	{
		dis=10;
	}
	net=(qty*rate)-(qty*dis/100);
	printf("the net amount to be pay is : %f",net);

}
