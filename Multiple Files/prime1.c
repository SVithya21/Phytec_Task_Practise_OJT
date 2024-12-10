#include<stdio.h>
#include"prime.h"
int main()
{
	int count;
	count=prime();
	if(count == 2)
		printf("It is a prime number");
	else
		printf("Not an prime number");
	
	return 0;
}
