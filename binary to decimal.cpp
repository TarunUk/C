#include<stdio.h>
int main()
{
	int n,r,m=1,bin=0;
	printf("\nEnter the Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%8;
		bin=bin+(r*m);
		m=m*10;
		n=n/8;
	}
	printf("\nBinary Value: %d",bin);
}
