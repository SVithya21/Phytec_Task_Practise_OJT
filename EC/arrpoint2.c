#include<stdio.h>
int main()
{
	int arr[2][3]={{10,20,30},{40,50,60}};
	/*int (*ptr)[3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			ptr=&arr[i][j];
			printf("\n%p",ptr);
			printf("\n%d",*ptr);
		}
	}*/
	printf("\n%p %p %p %p %p %p",(*(arr+0)+0),(*(arr+0)+1),(*(arr+0)+2),(*(arr+1)+0),(*(arr+1)+1),(*(arr+1)+2));
	printf("\n%d %d %d %d %d %d",*(*(arr+0)+0),*(*(arr+0)+1),*(*(arr+0)+2),*(*(arr+1)+0),*(*(arr+1)+1),*(*(arr+1)+2));
	return 0;
}
