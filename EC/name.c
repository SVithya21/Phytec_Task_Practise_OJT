#include<stdio.h>
int main()
{
	char arr[]="Natarajan";
	int n = sizeof(arr)/sizeof(char);
	for(int i=0;i<n;i++)
	{
		printf("%c\n",arr[i]);
	}
	return 0;
}
