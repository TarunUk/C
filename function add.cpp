#include<stdio.h>
main()
{
	int a=10,b=20,c,add;
	c=add(a,b);
	printf("%d",c);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
