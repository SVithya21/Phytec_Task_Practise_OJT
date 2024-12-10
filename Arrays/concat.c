#include <stdio.h>
#include <string.h>
int main() 
{
	char name1[]="Hello,";
	char name2[]=" Vithya!";
	strcat(name1,name2);
	printf("%s",name1);
	return 0;
}

