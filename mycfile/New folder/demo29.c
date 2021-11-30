#include<stdio.h>
void main()
{
	int a,b,c,as,bs,cs,ac,bc,cc;
	scanf("%d%d%d",&a,&b,&c);
	as=a*a;
	bs=b*b;
	cs=as*a;
	ac=as*a;
	bc=bs*b;
	cc= cs*c;
	printf("square of %d\n",as);
	printf("square of %d\n",bs);
	printf("square of %d\n",cs);
	printf("cube  of %d\n",ac);
	printf("cube  of %d\n",bc);
	printf("cube  of %d\n",cc);
	
	
}
