#include<stdio.h>
int odd(int,int);
int main()
{	
	int n1,n2,odd;
	printf("Enter n1 : ");
	scanf("%d",&n1);
	printf("\nEnter n2 : ");
	scanf("%d",&n2);
	odd=odd(n1,n2);
	return 0;
}	
int odd(int a,int b)
{
	int c;
	while(a<b)
	{
		if(a%2 == 0)
			a=a+1;
		else
		{
			printf("%d ",a);
			while(a<b)
			{
				c=a;
			}
		}
		a=a+2;
	}
	
}

