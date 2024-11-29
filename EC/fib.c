#include<stdio.h>
void fibonacci(int n,int a,int b)
{
	int sum=0;
	printf("%d ",a);
	printf("%d ",b);
	while(sum<n)
	{
		
		sum=a+b;
		a=b;
		b=sum;
		printf("%d ",sum);
	}
}

	
