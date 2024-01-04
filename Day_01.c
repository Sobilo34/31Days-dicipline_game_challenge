#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/** Maximum number of attempts before a timeout.**/
#define MAX_ATTEMPTS 3

/**Time in seconds to wait before allowing more attempts after reaching the maximum**/
#define TIMEOUT_SECONDS 10

/**Function to open the door**/
void doorOpening(void) {
    /**Define the correct door code**/
    const char *correctCode = "1337";

    /**Variables to track user input and attempts**/
    char userCode[20];
    int attempts = 0;

    /**Loop for multiple attempts**/
    while (attempts < MAX_ATTEMPTS) {
        printf("Enter the door code: ");
        scanf("%s", userCode);

        /**Check if the entered code is correct**/
        if (strcmp(userCode, correctCode) == 0) {
            printf("Correct code. The door is now open.\n");
            return;  /**Exit the function since the door is open**/
        } else {
            attempts++;
            int remainingAttempts = MAX_ATTEMPTS - attempts;

            /**Provide feedback on remaining attempts**/
            if (remainingAttempts > 0) {
                printf("Incorrect code. %d attempts remaining.\n", remainingAttempts);
            } else {
                /**Too many incorrect attempts; implement a timeout**/
                printf("Too many incorrect attempts. Wait for some seconds before trying again.\n");
                attempts = 0;  /**Reset attempts after the timeout**/
            }
        }
    }

    /**The loop exits if the maximum attempts are reached**/
    printf("Maximum attempts reached. The door is now permanently locked.\n");
}

int main() {
    doorOpening();  /**Call the doorOpening function to simulate the door-opening process**/
    return 0;
}
