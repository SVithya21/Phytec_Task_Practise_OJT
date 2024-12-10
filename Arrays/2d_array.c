#include<stdio.h>
int main()
{
	int r,c;
	printf("\nEnter rows:");
	scanf("%d",&r);
	printf("\nEnter columns:");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter the elements:");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("\n%d",&arr[i][j]);
		}
	}

	printf("\nPrint the elements");

	for(int i=0;i<r;i++)
	{
		printf("\n");
		for(int j=0;j<c;j++)
		{
			printf("%d  ",arr[i][j]);
		}
	}
	return 0;
}
