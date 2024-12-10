#include<stdio.h>
int main()
{
	int i=0,n=5,count=0;
	while(i<=n)
	{
		count=count+i;
		i++;
	}
	printf("%d\n",count);
	return 0;
}
