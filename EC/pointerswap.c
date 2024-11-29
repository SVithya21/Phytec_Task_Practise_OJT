#include<stdio.h>

void swapa( int a, int b)
{
	int *c = &b;
	a = c;
	printf("the value of a is %d\n",a);
}

void swapb(int a, int b)
{
	int *c = &a;
	b = c;
	printf("the value of b is %d\n",b);
}
int main()
{
	void(*opr[])(int, int) = { &swapa, &swapb};
	int len, num1, num2, i;
	len = sizeof(opr)/sizeof(opr[0]);
	printf("Enter two value for 'a' and 'b':\n");
	scanf("%d %d", &num1, &num2);
	for(i = 0; i < len; i++)
	{
		opr[i]( num1, num2);
	}
}
