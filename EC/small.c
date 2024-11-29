#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Get Three Numbers : \n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(c<b)
	{
		if(c<a)
			printf("c - %d is smallest",c);
		else
			printf("a - %d is smallest",a);

	}
	else
	{	
		if(b<a)
			printf("b - %d is smallest",b);
		else
			printf("a - %d is smallest",a);
	
	}
	return 0;
}
