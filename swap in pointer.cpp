#include<stdio.h>
int main()
{
	int a,b,temp;
	int *p1,*p2;
	scanf("%d%d", &a,&b);
	p1=&a;
	p2=&b;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("after swap: ");
	printf("%d %d",a,b);
}
