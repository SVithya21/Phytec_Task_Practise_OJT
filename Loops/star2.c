#include<stdio.h>
int main()
{
	int n1,i=5,j;
        printf("Number of Times:");
        scanf("%d",&n1);
	/*if(i<=n1)
	{*/
		while(i!=0)
		{
			printf("\n");
			j=0;
			while(j<i)
			{	
				printf("*");
				j++;
			}
			i--;
		}
	/*}*/

	return 0;
}
