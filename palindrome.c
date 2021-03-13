/* Author: Jeremy Kracy
 * EUID: jek0138 */

#include "major1.h"

void palindrome(unsigned int tester){

	char binary[32]; //Character array to hold individual binary bits
	
	printf("The binary representation is: "); //Print out binary representation
	for(int i = 31; i >= 0; i--){ //Print out input decimal in binary and set array as binary number
		unsigned int temp = tester >> i;
		if(temp&1){
			printf("1");
			binary[31-i] = 1;
		}
		else{
			printf("0");
			binary[31-i] = 0;
		}
	}
	printf("\n");
	int pal = 1; //Boolean check if it is a palindrome or not
	for(unsigned int i = 31; i >= 16; i--){
		if(binary[i]&binary[31-i]){ //Check if both bits are 1
			
		}
		else if(!(binary[i]|binary[31-i])){ //Check if both bits are 0
			
		}
		else{ //If not a match, report to user that it is not a palindrome.
			pal = 0;
			printf("%u is not a palindrome\n", tester);
			break;
		}
		
	}                    
	if(pal == 1){ //Tell the user it is a palindrome
		printf("%u is a palindrome\n", tester);
	}

}
