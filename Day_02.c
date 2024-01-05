#include <stdio.h>

/* Test for If else-if Shorthand or ternary Conditional Statement*/

/*This short game asks if the user is Sobil. if yes, he allows the user to edut a specific line of his code. Else, he deprives the user*/

int main(void)
{
	char name[100];/*Initializes the name input*/
	int line_num;/*Initializes the line_number input*/

	printf("Input your name:\n");/*Name of the user*/
	scanf("%s", name);
	if (strcmp("Sobil", name) == 0)/*Comparing the name of the user with Sobil*/
	{
		printf("You're the writer of the code, Which line of code you wanna edit?\n");/*If the user is Sobil, editing access is given*/
		scanf("%d", &line_num);/*Takinf tge line number to be edited*/
		(line_num > 0) ? printf("Proceed to edit the line\n") : printf("The line you wanna edit does not exist\n");
		/**
		 * This is the implementation of the Ternany Conditional Statement, normally the code is written like this
		 * if (line_num > 0) {
		 * 	printf("Proceed to edit tge line.");
		 * 	}
		 * else {
		 *	printf("The line you wanna...");
		 * }
		 */

	}

	else
	{
		printf("You're not the writer of this code. You can't edit anything\n");
	}

	return (0);
}
