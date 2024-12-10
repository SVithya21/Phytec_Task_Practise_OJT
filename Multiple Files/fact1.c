#include<stdio.h>
void fact(void)
{
	int fact=1,i=1,n;
	printf("Enter the Number:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d = %d\n",n,fact);
}
