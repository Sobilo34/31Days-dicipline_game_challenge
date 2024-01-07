#include <stdio.h>

/*Test on Nested if statement*/
/*Rhis game is used to calculate the leap year. The condition for leap year is a sitiation whereby a year is divisible by 4, not divisible by 100 unless it is divisible by 400*/

int main(void)
{
	int year;

	printf("This is a leap year calculator, type the year you wanna calulate: \n");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("This is not a leap year\n");
			}
			else
				printf("This is a leap year\n");
			printf("This is a leap year\n");
		}
		else
			printf("This is not a leap year");
	printf("This is a leap year\n");
	}

	else
		printf("This is not a leap year\n");
}
