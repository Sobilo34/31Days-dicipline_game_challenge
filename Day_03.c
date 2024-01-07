#include <stdio.h>

/*This is a function to Implement switch for conditional statements. It is a game that select which  day matches the specied number*/

int main()
{
	int day;/*Set the number of day to compare*/

	printf("Enter the number of the day you want to compare:  ");
	scanf("%d", &day);
	switch (day)/*Declare swicth instead of using if*/
	{
		case 1:/*Use cases for each conditions, */
			printf("Sunday\n");
			break;
		case 2:/*Other cases stand for else if*/
			printf("Monday\n");
			break;
		case 3:
			printf("Tuesday\n");
			break;
		case 4:
			printf("Wednesday\n");
			break;
		case 5:
			printf("Thursday\n");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
		default:/*This is declare execute something incase non of the condition is met. its optional though*/
			printf("The day set is not available\n");
	}
}
