#include<stdio.h>
int main()
{
	int arr[5]={45,65,85,35,78};
	int i;
	int* pr;
	
	for (i=0;i<5;i++)
	{
		pr=&arr[i];
		printf("\n address of array %d = %u",i,pr);
		pr++;
	}
	return 0;
}
