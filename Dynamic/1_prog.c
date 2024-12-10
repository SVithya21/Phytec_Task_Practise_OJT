#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=10;
	int *ptr;
	size_t size=10;
	
	ptr = (int *)malloc(size);

	*ptr=a;
	*(ptr+1)=20;

	for(int i=0;i<2;i++)
		printf("%d\n",*(ptr+i));

	free(ptr);
	ptr=NULL;
	
	return 0;
}
	
