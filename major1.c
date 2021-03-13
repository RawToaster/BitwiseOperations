

#include "major1.h"

int main(){

	int input;		// holds users menu selection
    unsigned int num = 0;	// the user input number that is less than 2 billion

	while(1){
		// MENU PROMPT
		printf("What would you like to do?\n");
		printf("(1) POWER OF 2\n(2) REVERSE BITS\n(3) REPLACE BIT POSITION FROM MASK\n(4) PALINDROME\n(5) EXIT\n --> ");
		scanf("%d", &input);

		do{
			if(input == 5){
				break;
			}
	                printf("Enter a positive integer less than 2 billion: ");
	        	scanf("%u", &num);
	        }while(num <= 0 || num >= 2000000000);

		// Reading in menu option
		do {
			switch(input)
			{
				case 1:
	                		power(num);
					
					break;
				case 2:
					reverse(num);
					break;
				case 3:
					replace(num);	
					break;
				case 4:
					palindrome(num);
					break;
				case 5:
					printf("\nThanks for using the program. Goodbye!\n");
					return 0;
				default:
					printf("\nInvalid input. Try again.\n");
	                	        break;
			}
		}while(input < 1 || input > 5);
	}

	return 0;
}
