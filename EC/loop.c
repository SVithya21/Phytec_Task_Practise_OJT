#include<stdio.h>
void evenodd(int,int,int);
int main()
{

	int x,n,y;
	printf("Starting number:");
	scanf("%d",&x);
	printf("Ending number :");
	scanf("%d",&n);
	y=x;
	evenodd(x,n,y);
	return 0;
}
void evenodd(int a,int b,int c)
{
	printf("Even Numbers are : ");
        while(a<=b)
        {
                if(a%2 == 0)
                {
                        printf("%d  ",a);
                }
                a++;
        }
        printf("\nOdd Numbers are : ");
        while(c<=b)
        {
                if(c%2 != 0)
                {
                        printf("%d  ",c);
                }
                c++;
        }
        printf("\n");
}

	

