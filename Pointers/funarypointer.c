#include<stdio.h>

void less(int a,int b)
{
	if(a==b)
	{
		
	}
	else if(a<b)
	{
		printf("a is lesser than b\n");
	}
	else
	{
		printf("b is lesser than a\n");
	}
}

void grt(int a, int b)
{
	if(a==b)
	{

	}
	else if(a>b)
	{
		printf("a is greater than b\n");
	}
	else
	{
		printf("b is greater than a\n");
	}
}

void equal(int a, int b)
{
	if(a==b)
	{
		printf("a is equal to b\n");
	}
}
int main()
{
	void(*opr[])(int, int) = {&less, &grt, &equal};
	int len, num1, num2, i;
	len = sizeof(opr)/sizeof(opr[0]);
	printf("Enter two values:");
	scanf("%d %d", &num1, &num2);
	for(i = 0; i < len; i++)
	{
		opr[i](num1, num2);
	}


	return 0;
}
