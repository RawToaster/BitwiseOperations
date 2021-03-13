//awr0047
//Austin Reeves


#include "major1.h"

void replace(unsigned int num){


	unsigned int mask;		// holds the user input mask number
	unsigned int pos;		// holds the user input for the position in the mask
	unsigned int newNum;		
	unsigned int newMask;		// holds the mask after the bit shifting

	//printf("Enter a number between 0 and 2 billion: ");
        //scanf("%u", &num);

	// prompting for the mask between 0 and 3 billion
	do {
		printf("Enter a positive integer mask up to 3 billion:  ");
		scanf("%u", &mask);
	}while(mask <= 0 || mask >= 3000000000);

	// prompting for the position for the bit in the mask
	do {
		printf("Enter the bit replacement position from mask (0-indexed):  ");
		scanf("%u", &pos);
	}while(pos < 0 || pos > 31);
	
	// moving to the bit in the mask at the given position
	newMask =   mask;
	newMask <<= 31 - pos;
	newMask >>= 31;
	//newMask <<= pos;

	newNum = num;
	newNum <<= 31 - pos;
	newNum >>= 31;
	//newNum <<= pos;

	// checking if the bit in the given position of the mask is a 1 or 0	
	if (newNum ^ newMask)
	{
		if(newMask == 0)
		{
			printf("0 newMask = %u \t num = %u\n", newMask, num);
			newMask <<= pos;
			newMask = ~newMask;
			num &= newMask;
			//temp = pow(2, pos);
		 	//num -= temp;
		}
		else
		{
			printf("1 newMask = %u \t num = %u\n", newMask, num);
			newMask <<= pos;
			num |= newMask;
			//temp = pow(2, pos);
                        //num += temp;
		}
                printf("New integer with bit %u from mask %u is %u\n",pos,mask,num);
	}
        else
        {
                //num |= newMask;
                printf("New integer with bit %u from mask %u is %u\n",pos,mask,num);
        }

}
