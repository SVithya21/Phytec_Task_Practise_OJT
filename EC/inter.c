#include<stdio.h>
int main()
{
	char n1[]="cat";
	char n2[]="rat";
	int s1=sizeof(n1)/sizeof(char);
	int s2=sizeof(n2)/sizeof(char);
	char final[s1+s2];
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<=i;j++)
		{
			final[s1+s2]=n1[i]+n2[j];
		}
	}
	printf("%s",final);
	return 0;
}
