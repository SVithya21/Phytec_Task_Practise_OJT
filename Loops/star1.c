#include<stdio.h>
int main()
{
	char ch='*';
	int n1,i,j;
	printf("Number of Times:");
	scanf("%d",&n1);
	i=0;
	while(i<n1)
	{
		if(ch == '*')
			printf("\n");
		j=0;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		i++;
	}
	return 0;
}

