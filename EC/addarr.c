#include<stdio.h>
int main()
{
	int arr[6],sum=0,i;
	for(i=0;i<6;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<6;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of array : %d",sum);
	return 0;
}
