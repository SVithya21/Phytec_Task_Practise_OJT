#include<stdio.h>
#include<math.h>
int arm(void);
int main()
{
	int sum1,k,n;
	printf("Enter n:");
        scanf("%d",&n);
	sum1=arm();
	if(n == sum1)
                printf("%d is an armstrong number",n);
	else
		printf("%d not an armstrong number",n);
        return 0;
}

int arm(void)	
{
	int i,j,num,r,q,count=0,sum=0;
	printf("Enter the number to check:");
	scanf("%d",&num);
	i=num;
	while(i!=0)
	{
		i=i/10;
		count++;
	}
		
	while(num>0)
	{
		r=num%10;
		sum=sum+pow(r,count);
		q=num/10;
		num=q;
	}
	return(sum);
}
