#include<stdio.h>
void greet()
{
	printf("Hello!\n");
}
void add(int x, int y)
{
	int sum;
	sum=x+y;
	printf("Sum of two:%d\n",sum);
}
int multiply(int x, int y)
{
	return x*y;
}
int factorial(int num)
{
	if(num==0 || num==1)
		return 1;
	else
		return num * factorial(num-1);
}
int square(int e)
{
	return e*e;
}
void display(int f)
{
	printf("\nSquare of the given number : %d\n",f);
}

int main()
{
	printf("\n1. Define a function greet() to print Hello! and call it from main().\n");
	greet();

	printf("\n2. Write a function add() that takes two integers as parameters and prints their sum.\n");
	int a=5,b=3;
	add(a,b);

	 printf("\n  3. Create a function multiply() that returns the product of two numbers.\n");

	int c=multiply(a,b);
	printf("Multiply :%d\n",c);

	 printf("\n 4. Implement a recursive function to calculate the factorial of a number (e.g., 5).\n");

	int fact=factorial(5);
	printf("Factorial of 5 is %d",fact);

	printf("\n 5. Develop a program with two functions: one to square a number and another to display it.\n");
	int squared=square(5);
	display(squared);	
	return 0;
}
