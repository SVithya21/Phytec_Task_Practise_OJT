#include<stdio.h>
int main()
{
	int arr[]={3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int *ptr,i;
	printf("Enter the position of an element to access: ");
	scanf("%d",&i);
	if(i<n)
	{
		ptr=&arr[i];
		printf("%d\n",arr[i]);
		printf("%p\n",&arr[i]);
		printf("%p\n",ptr);
		printf("%p\n",&ptr);
		printf("%d\n",*ptr);
	}
	return 0;
}

