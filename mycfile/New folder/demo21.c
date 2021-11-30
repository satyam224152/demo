#include<stdio.h>
void main()
{
	int x=2,y=4,z=1,min;
	min=x<y && x < z?x:y<z  ?y:z;
	printf("Minimum is : %d",min);
	//output min=1
}
