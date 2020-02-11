#include <stdio.h>
#include <math.h>

int main (void){

	int selection, year;
	float amount, total, intrest, rate;
	printf("Bank account type\n\n(1) Checking 5%% interest\n(2) Savings 10%% interest\n(3) Fixed Deposit 15%% interest\nPlease make a selection: ");
	scanf("%d", &selection);
	
	while (selection < 1 || selection > 3){//error check for selection
		printf("Incorrect selection, please make a try again: ");
		scanf("%d", &selection);
	}
	
	switch (selection){//selection of type of account
		case 1:
			rate = 5.00;
		break;

		case 2:
			rate = 10.00;
		break;

		case 3:
			rate = 15.00;
		break;
	}

	printf("Enter a year between 1-10: ");
	scanf("%d", &year);

	while (year < 1 || year > 10){//error check for year
		printf("Incorrect value, year should be between 1-10\nEnter a year: ");
		scanf("%d", &year);
	}

	printf("\nEnter the amount to be deposited: ");
	scanf("%f", &amount);

	while (amount <= 0){//error check for negative amounts
		printf("Incorrect value, enter the amount again\nEnter the amount: ");
		scanf("%f", &amount);
	}

	total = amount*(pow(1 + rate/100, year));//total
	intrest = total - amount;//intrest

	printf("\nTotal amount after %d years is %.2f", year, total);
	printf("\nTotal intrest earned on the amount %.2f with the rate %.2f%% is %.2f\n", amount, rate, intrest);
	
	float num1, num2, bonus = 1, i;
	printf("\n********** Bonus Part **********\nFirst enter a number then enter a number to be an exponent\nEnter a number: ");//bonus
	scanf("%f", &num1);
	printf("Enter an exponent: ");
	scanf("%f", &num2);
	
	for(i = 0; i < num2; i++){
		bonus *= num1;
		}

	printf("pow(%.2f, %.0f) = %.2f\n", num1, num2, bonus);

return 0;
}