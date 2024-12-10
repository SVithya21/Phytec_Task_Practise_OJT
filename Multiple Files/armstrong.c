#include<stdio.h>
#include"armstrong.h"
int main()
{
	int res,num;
	printf("Enter the Number :");
	scanf("%d",&num);
	res=arm(num);
	if(res==num)
		printf("%d - It is an armstrong number\n",num);
	else
		printf("%d - It is not an armstrong number\n",num);
	return 0;
}
