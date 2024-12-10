#include<stdio.h>
int main()
{
	int a=10;
	int *j,**k;
	j=&a;
	k=&j;
	printf("\nValue of a:%d",a);
	printf("\nValue of j:%u",j);
	printf("\nValue of k:%u",k);
	printf("\nAddress of a:%u",&a);
	printf("\nAddress of j:%u",&j);
	printf("\nAddress of k:%u",&k);
	printf("\nValue a:%d",**(&j));
	printf("\nAddress of j:%u",*(&k));
	printf("\nValue of a:%d",**k);
	return 0;
}
