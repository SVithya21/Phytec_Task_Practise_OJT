#include<stdio.h>
#include"fib.h"
int main()
{
	int n1=0,n2=1,num;
	printf("Enter Fibonacci Series ");
	scanf("%d",&num);
	fibonacci(num,n1,n2);
	return 0;
}

