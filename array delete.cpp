#include<stdio.h>
int main()
{
	int a[10], n, index, i;
	printf("How many elements ?");
	scanf("%d", &n);
	for(i=0;i<n;i++);
		scanf("%d",&a[i]);
	printf("At which index you want to delete");
	scanf("%d",&index);
	for(i=index;i<n-1;i++);
		a[i]=a[i+1];
		n=n-1;
	printf("After deletion");
	for(i=0;i<n;i++);
	printf("%d",a[i]);	
}
