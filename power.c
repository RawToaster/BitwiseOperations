
//
//  power.c
//  3600_Proj1
//
//  Created by Jonathan Sanchez on 1/28/20.
//  Copyright © 2020 Jonathan Sanchez. All rights reserved.
//

#include <stdio.h>

  
void power(unsigned int userI)
{
    unsigned int mask = 1; /*mask used to flip "on" values later*/
    
    do  /*do-while loop*/
    {
        int counter = 0;
        for (int i = 31; i >= 0; i--) { /*looping through all bits*/
            
            int temp = userI>>i; /*this variable will be setting the user input in the correct bit format.*/
            if((temp&1) == 1)
            {
                counter++; /*Counter will increment everytime there is a 1 in the temp variable.*/
            }
        }
        
        int counter2 = 0;
        if (counter > 1) /*If the counter is greater than 1 that means the input is NOT a power of 2.*/
        {
            printf("%u is not power of 2.", userI);
            for (int i = 31; i >= 0; i--) { /*looping through all bits again.*/
                int temp = userI>>i;
                if((temp&1) == 1)
                {
                    break;
                }
                else
                {
                    counter2++; /*counter2 increments everytime there is a zero.*/
                }
            }
            
            counter2 = 32 - counter2;
            
            mask <<= counter2; /*moving the mask counter2 places */
            
            userI &= mask; /*this is comparing the user input and the mask values*/
            
            counter2 = (32 - counter2) + 1;
            
            userI |= mask; /* turning on/off the correct bits */
            
            printf("\nNext higher integer that is a power of 2 is: %u", userI);
            printf("\n");
            
        }
        else
        {
            printf("%u is a power of 2.", userI); /*If the user input is already a power of 2 then just print this out.*/
            printf("\n");
        }

    } while (userI <= 0 || userI > 2000000000); /*continue to run this code until the user input is within these bounds.*/

}
