#include<stdio.h>
int main()
{
	char n1[]="Vithya";
	int i;
	int s1=sizeof(n1)/sizeof(char);
	char n2[20];
	for(i=0;i<s1;i++)
	{
		n2[i]=n1[i];
	}
	n2[i]='\0';
	printf("%s",n2);
	return 0;
}
	
