#include<stdio.h>
int main()
{
	float celsius,farenheit;
	printf("Enter the celsius degree : ");
	scanf("%f",&celsius);

	farenheit=(1.8 * celsius)+32;
	printf("Farenheit Degree = %.2f",farenheit);
	return 0;
}
