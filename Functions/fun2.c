#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b;
        printf(" a : ");
	scanf("%d",&a);
	printf("\n b : ");
	scanf("%d",&b);
	sum(a,b);	
	return 0;
}
void sum(int x,int y)
{
	int c;
	c=x+y;
	printf(" %d + %d = %d ",x,y,c);
}
