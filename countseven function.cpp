#include<stdio.h>
void countthree(int n)
{
	int rem,count=0;
	while(n>0)
	{
		rem=n%10;
		if(rem==3)
			count++;
		n=n/10;
	}
	printf("no of seven=%d",count); 
}
main()
{
	int a;
	scanf("%d",&a);
	countthree(a);
	
}
