#
include < stdio.h >
void ProgramInfo(void) {
	//Author's information
	printf("Author: Shveta Shah\n");
	printf("Lab: Tues 1pm\n");
	printf("Program: #1, Guess Number\n");
	printf("Jan 21, 2017\n");
	printf("\n");
	printf("Welcome to the number guessing game!\n");
	printf("If you concentrate, sometimes you can connect to the electrons in the computer!\n");
	printf("Let's try it. Think of a three digit number. (To make it harder, make the digits all different from each other).\n");
	return;
}

int main() {
	ProgramInfo();
	int lft, mdl, ri8, uenter, rlft, rmdl, rri8, i, sub, add, ones, tens, hundreds;
	int reverseNumber, countinue, rSub;
	char press = 0;
	char x, y, d, t;

	//Allow user to enter a three digit number between 0 to 1000
	printf("Type in your number:");
	scanf_s("%d", &uenter);
	printf("\nI'll help you with the math. Lets randomise those digits by reversing them, and do a subtraction:\n");

	ri8 = uenter % 10;
	mdl = (uenter % 100) / 10;
	lft = (uenter % 1000) / 100;

	//Find a number with three different digits
	if ((ri8 != mdl) && (ri8 != lft) && (mdl != lft)) {

		//Reversed a given number.
		reverseNumber = (ri8 * 100) + (mdl * 10) + lft;
		printf("reverseNumber %d\n", reverseNumber);
		printf("\n");

		//Compared original number with reversed digits.
		// subtract smaller number from bigger number.
		if (uenter > reverseNumber) {
			printf("%d\n %d\n", uenter, reverseNumber);
			printf(" %d  (The original number)\n", uenter);
			printf("-");
			printf("%d  (The reversed digits)\n", reverseNumber);
			printf("=====\n");

			sub = uenter - reverseNumber;
			printf("%d\n", sub);
			printf("\n");
		}
		else {
			sub = reverseNumber - uenter;
			printf(" %d  (The reversed digits)\n", reverseNumber);
			printf("-");
			printf("%d  (The original number)\n", uenter);
			printf("=====\n");
			printf(" %d\n", sub);
			printf("\n");
		}

		//Ask user to decide continue with program or exit.
		printf("Press 'Y' to continue or 'X' to exit...");
		scanf_s(" %c", &press);
		printf("A player press: %c\n", press);
		printf("\n");

		{
			//When an user choose Y do addition
			//Reverse the subtraction's number and add it with the subtraction's number.
			if (press == 'Y' || press == 'y') {

				rlft = sub % 10;
				rmdl = (sub % 100) / 10;
				rri8 = (sub % 1000) / 100;
				rSub = (rlft * 100) + (rmdl * 10) + rri8;

				printf(" %d\n", sub);
				printf("+");
				printf("%d\n", rSub);
				printf("=====\n");
				printf("   ?\n");
				printf("\n");
			}

			//Exit the program with choosing the x.
			if (press == 'x' || press == 'X') {
				return 0;
			}

			//ENTER D TO SEE THE ANSWER OR ENTER X TO EXIT FROM THE PROGRAM
			printf("Before you continue, take a look at my number guess written down on paper.\n");
			printf("\n");
			printf("Press 'D' to display the answer or 'X' to exit...");
			scanf_s(" %c", &press);

			// ENTER D WILL ADD THE ANSWER OF SUBTRACTION AND ADD INTO REVERSED SUBTRACTION'S NUMBER.	
			if (press == 'D' || press == 'd') {
				//printf(" %c", press);
				add = rSub + sub;
				printf("Answer is %d.\n", add);
			}

			//X WILL EXIT THE PROGRAM
			else if (press == 'x' || press == 'X') {
				printf(" %c", press);
				printf("\n Closing the program....");
				return 0;
			}
		}
	}

	printf("Now lets again scramble the numbers by reversing them, and adding them this time:\n");
	printf("\n");
	system("pause");
	printf("Press 'T' to test all possible combinations or 'X' to exit...");
	scanf_s(" %c", &press); {

		//ENTER T WILL GIVE A LIST OF NOT WORKING NUMBERS BETWEEN 1 TO 1000.
		if (press == 'T' || press == 't') {
			int count = 0;
			int i = 0;

			while (i < 1000) {
				ones = i % 10;
				tens = (i % 100) / 10;
				hundreds = (i % 1000) / 100;

				//COMPARE ANY TWO DIGITS TO GET A LIST OF NOT WORKING NUMBERS.
				if ((ones == tens) || (tens == hundreds) || (ones == hundreds)) {
					printf("%d ", i);
					count = count + 1;
				}
				i++;
			}
			printf("\nThere are %d values that do not work.\n", count);
			printf("Thanks for playing!");
		}

		//ENTER X TO EXIT FROM THE PROGRAM
		do {
			printf(" %c", press);
			printf("\n Closing the program....");
			return 0;
		} while (press == 'X' || press == 'x');
	}
	return 0;
}# Games
