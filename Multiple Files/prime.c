#include<stdio.h>
int prime(void)
{
	int n,count=0,i=1;
	printf("Enter the number :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	return(count);
}
