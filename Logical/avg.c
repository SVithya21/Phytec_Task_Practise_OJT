#include<stdio.h>
int main()
{
	int marks[]={91,93,95,97,86,83};
	int n=sizeof(marks)/sizeof(marks[0]);
	float total=0,avg;
	for(int i=0;i<n;i++)
	{
		total +=marks[i];
	}
	avg=total/n;
	printf("Average is :%.2f",avg);
	return 0;
}
