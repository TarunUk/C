#include<stdio.h>
int main(){
	int arr[4] = {1,3,5,7};
	int size=4;
	int index=5;
	
	for(int i=index;i<size-1;i++)
	arr[i]= arr[i+1];
}

