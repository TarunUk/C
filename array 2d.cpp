#include<stdio.h>
main()
{
	int a[10],n;
	printf("how many elements");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
			printf("%d ",i);
	}
}
