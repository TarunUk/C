#include<stdio.h>
main()
{
	int marks;
	scanf("%d",&marks);
	if(marks >= 80)
		printf("A");
	else if(marks >= 60)
		printf("B");
	else if(marks >= 40)
		printf("C");
	else
		printf("D");
		
}
