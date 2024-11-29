#include<stdio.h>
void oddeven(int a,int b)
{
	int x,y;
	x=a;
	y=b;
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d ",a);
		}
		a++;
	}
	printf("\n");
	while(x<=y)
	{
		if(x%2!=0)
		{
			printf("%d ",x);
		}
		x++;
	}
}

	

