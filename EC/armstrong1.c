#include<stdio.h>
#include<math.h>
int arm(int n)
{
	int n1,r,result=0,count=0;
	n1=n;
	while(n!=0)
	{
		if(n>0)
		{
			n=n/10;
			count++;
		}
	}
	while(n1!=0)
	{
		if(n1>0)
		{
			r=n1%10;
			n1=n1/10;
			result=result+pow(r,count);
		}
	}
	return(result);
}
			
