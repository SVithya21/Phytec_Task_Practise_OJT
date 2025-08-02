#include<stdio.h>
int main()
{
	printf(" 1. Write a program to check if a number (e.g., 10) is positive using if-else.\n");
	int a=10;
	if(a>0)
		printf("\nPositive\n");
	else if(a<0)
		printf("\nNegative\n");
	else
		printf("\nEqual\n");

	 printf("\n  2. Use a switch statement to print the day of the week based on a number (1-7).\n");
	 int day;
	 printf("\nEnter day:");
	 scanf("%d",&day);
	 switch(day)
	 {
		 case 1:
			 printf("\nMONDAY\n");
			 break;
		case 2:
			 printf("\nTUESDAY\n");
                         break;
		case 3:
                         printf("\nWEDNESDAY\n");
                         break;
		 case 4:
                         printf("\nTHURSDAY\n");
                         break;
                case 5:
                         printf("\nFRIDAY\n");
                         break;
                case 6:
                         printf("\nSATURDAY\n");
                         break;
		case 7:
			 printf("\nSUNDAY\n");
			 break;

		default:
			 printf("\n Invalid Day\n");
	}

	printf("\n  3. Create a for loop to print numbers from 1 to 10.\n\t");
	int i;
	
	for(i=1;i<=10;i++)
	{
		printf("%d  ",i);
	}
	printf("\n");


	 printf("\n 4. Write a while loop to print numbers from 0 to 4.\n\t");
	int j=0;
	
	while(j<=4)
	{
		printf("%d  ",j);
		j++;
	}
	printf("\n");


	printf("\n5. Develop a program using do-while to print numbers until a user-entered limit is reached\n");
	int k=0,n;
	printf("\nEnter a limit:");
	scanf("%d",&n);
	
	do{
		printf("%d  ",k);
		k++;
	}while(k<=n);
        printf("\n");

	return 0;
}


