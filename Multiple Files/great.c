#include<stdio.h>
int great(int a,int b)
{
	printf("Enter a,b:");
	scanf("\n%d\n%d",&a,&b);
	if(a>b)
		return a;
		/*c=printf("A is Greatest");*/
	else
		return b;
		/*c=printf("B is Greatest");*/
}

