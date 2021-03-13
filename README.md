# BitwiseOperations
### Description
The program takes in an integer and can perfrom a series of bitwise operations on the number. Operations include, checking if it is a power of 2, reversing bits and printing new number, checking if the number is a palindrome, and replacing a bit from the original number with one from a mask. The application was developed in a Linux environment with a group of people.

### Execution
The program can be compiled with the makefile and command `make`. This will generate the executable that can then be run with command `make run`.

### Use
A menu will be displayed with five options:
  ```
  (1) POWER OF 2
  (2) REVERSE BITS
  (3) REPLACE BIT POSITION FROM MASK
  (4) PALINDROME
  (5) EXIT
  ```
After selecting an option, the user will be prompt to input an integer less than 2 billion. This is the number that each menu option will perform its bitwise operation on.
##### Power of 2 
Checks through all bits of the number to see if it is a power of 2. If it isn't, it will find the next highest power of 2 and report it back to the user.
##### Reverse Bits
Reverses the bits of the given number and reports the new number back to the user. 
##### Replace Bit Position from Mask
Takes in additional number less than 3 billion as a mask and an integer less than 32 as the position. Then it will go to the bit at the given position in each number and replace the bit in the original number with the bit in the mask. The new number that is created will be returned to the user. 
##### Palindrome
Checks if the bits of the given number create a palindrome and reports back to the user if the number is a palindrome or not. 
