#include<stdio.h>
int main()
{
	char name[]="Hello";
	int n=sizeof(name)/sizeof(name[0]);
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	return 0;
}
