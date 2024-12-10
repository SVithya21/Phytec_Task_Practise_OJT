#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *ptr,*q,i=0;
	while(i<5)
	{
		ptr=&arr[i];
		printf("\n%p",ptr);
		printf("\n%d",*ptr);
		i++;
	}
	return 0;
}
