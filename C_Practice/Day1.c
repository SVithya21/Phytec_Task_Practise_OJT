#include<stdio.h>
int main()
{
	printf("\n1. Write a C program to print Hello, World! to the console.");
	printf("\nHello, World!\n");

	printf("\n2. Declare and print an integer variable age with value 20.");
	int age=20;
	printf("\nAge is %d\n",age);

	printf("\n3. Create a program to take an integer input from the user and display it.");
	int num;
	printf("\nEnter a Number:");
	scanf("%d",&num);
	printf("\nThe number is %d\n",num);

	printf("\n4. Write a program to add two integer variables (e.g., 5 and 3) and print the result.");
	int a,b;
	printf("\nEnter a and b:");
	scanf("%d %d",&a,&b);
	printf("\nThe addition of two integer variables is %d\n",a+b);

	printf("\n5. Develop a program to store and display an integer, a float, and a character in separate variables.");
	int x=50;
	float y=50.653;
	char z='A';
	printf("\nValues are -> Integer: %d , Float: %.2f , Character: %c\n", x, y, z);
	return 0;
}

