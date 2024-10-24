#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value for x: ");
	scanf("%d",&x);
	printf("Enter the value for y: ");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("The swap value of x without taking variable is: %d",x);
	return 0;
}
