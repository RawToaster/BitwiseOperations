#include <stdio.h>
#include <stdlib.h>
#include "major1.h"

void reverse(unsigned int num){

	const int INT_BITS = sizeof(int) * 8;  			// bits = bytes * 8

	unsigned int reverse = 0;

	for(unsigned int i = 0; i < INT_BITS; ++i){ 		//repeat for every bit in num
		
		unsigned int temp = 0;

		temp = num & (1 << i);				// set temp to the simgle bit at the i'th position
		//printf("%d\n",temp);		//TESTING

		if(temp){ 					// if temp bit is 1 (temp > 0)
			reverse |= (1 << ((INT_BITS-1)-i));	// set the bit in the revered position to 1 in reverse var
		}
		
		//printf("\t%d\n",reverse);   	//TESTING
	}

	printf("%d with bits reversed is %d\n", num, reverse);
}
