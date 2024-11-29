#include<stdio.h>

int main()
{
	int x,y;
	printf("\nx is : ");
	scanf("%d",&x);
	printf("\ny is : ");
	scanf("%d",&y);
	while(x<=y)
	{
		printf("%d  ",x);
		x=x+2;
	}
	return 0;
}
