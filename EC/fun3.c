#include<stdio.h>
int sum(void);
int main()
{
	int result;
	result=sum();
	printf("%d",result);
	return 0;
}
int sum(void)
{
	int sum,a,b;
	printf(" a :");
	scanf("%d",&a);
	printf("\n b :");
	scanf("%d",&b);
	sum = a+b;
	return(sum);
}

