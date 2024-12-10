#include<stdio.h>
int main()
{
	char ch='*';
	int n1,i,j;
	printf("Number of times : ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
	}
	return 0;
}
