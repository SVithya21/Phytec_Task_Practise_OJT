#include<stdio.h>
void fact(void);
int main()
{
	fact();
	return 0;
}

void fact(void)
{
	int n,i=1,count=1;
	printf("Enter n :");
	scanf("%d",&n);
	while(i<=n)
	{
		count=count*i;
		i++;
	}
	printf("sum of factorial %d = %d",n,count);

}


