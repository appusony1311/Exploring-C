
//bits.c


//Add two number in binary representation 
//Given an integer and number k, right or left rotate bits in this integer by k
//Count number of set bits in an integer
//Given a screen in form of byte array with width and start and end points of a horizontal line. Draw this line DrawHorizontalLine.java
//Given an array in which every number occurs 3 times find this one number occurring only once - 
//Given two numbers M and N, insert M into N from i to j bits of N
//Given an integer find next higher/lower integer with same number of set bits as original integer - 
//Given an integer find next power of 2 greater than this integer
//Given an array find one/two number occurring odd number of times
//Given two numbers M and N, how many bit flips are required to convert M into N
//Given an integer reverse bits of this integer
//Given an integer swap its odd bits with even bits at every position
//Given an integer and two numbers i and j, swap bits at these positions in this integer
//Square of a number without using * or ^ operator
//Find two missing number where there are n-2 unique numbers in range 1 to n. Find one missing and one repeated number where all //numbers are in range 1 to n.
//Get first 2^n gray code - GrayCode.java
//Convert a binary code to integer
//Flip the bits of given number
//Find the most significant set bit of a number
//Quickly check if bits in a number are in alternate pattern

//Macro to set a bit
#define bitset(byte,nbit)   ((byte) |=  (1<<(nbit)))

//Toggle a bit
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))

//Clear a bit
#define bitclear(byte,nbit) ((byte) &= ~(1<<(nbit)))
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))

//Checking if bit at nth position is set or not
#define bitcheck(byte,nbit) ((byte) &   (1<<(nbit)))

//Changing nth bit to x
//Show bits

//Given register address how to write a value to it.
//
//Conversions of a given number
//To sum of given digits
//Reverse a number without recursion
//To check the given number is factorial or not
//Rotation of bits

//Calculate 2^n
//Check if given 32 bit integer is power of 2

//To check whether little endian to big endian
//To convert 32 bit from LE to BE
//S to I
//I to S

//Add without using + operator [Half adder logic]
//Full adder logic
//Subtract without using operator
//Multiply without using x operator
//Divide 2 nos without using / operator
//Divisible by 2 using right shift operation
//Multiply by 2 using left shift operator
//Find xor without using xor

//Inverting every bit of a number/1s complement
//2s complement of the no.
//Stripping off the lowest set bit
//Getting lowest set bit of a number

//Clear all bits from lsb to ith bit
//Clearing all bits from msb to ith bit

//Count set bits in integer
//Position of rightmost set bit
//To clear rightmost set bit
//Position of rightmost set bit
//Turn off rightmost set bit
//Count total set bits in all nos from 1 to n
//Check if a number is even or odd


//Quickest way to swap 2 no.s
//Swap every bits
//Swap all odd & even bits
//To swap bits in a given number 
//Set mth to nth bit
//Shift even & odd positions
//To interchange the bits in two given numbers
//To interchange the bits in a given number


//Direct XOR without using loops
//Game of XOR
//Find bit at a position
//Odd occurring element
//Missing number array
//Index of a extra element
//Power set
//
//To print 1 to 100 without using loops
//To print helloworld without using semicolon



//https://www.geeksforgeeks.org/bitwise-algorithms/
//
//Basic :

//Find the element that appears once
//Detect if two integers have opposite signs
//Add 1 to a given number
//Find whether a given number is a power of 4 or not

//Rotate bits of a number
//Find the Number Occurring Odd Number of Times
//Check for Integer Overflow
//Count set bits in an integer
//Count number of bits to be flipped to convert A to B

//Program to find whether a no is power of two
//Binary representation of a given number
//Find position of the only set bit
//How to swap two numbers without using a temporary variable?
//Swap two nibbles in a byte
//How to turn off a particular bit in a number?
//Multiply two numbers using bitwise operators
//Add two bit strings
//Check if two numbers are equal without using arithmetic and comparison operators
//Calculate XOR from 1 to n

//Swap three variables without using temporary variable
//Check if a number has bits in alternate pattern
//Count minimum bits to flip such that XOR of A and B equal to C
//Efficient method for 2’s complement of a binary string
//Toggle case of a string using Bitwise operators
//Toggling k-th bit of a number
//Toggle all the bits of a number except k-th bit
//Set the rightmost unset bit
//Toggle the last m bits
//Toggle bits in the given range
//Unset bits in the given range
//Find the largest number with n set and m unset bits
//Find the smallest number with n set and m unset bits
//Bitwise recursive addition of two integers
//Swap every two bits in bytes
//For every set bit of a number toggle bits of other
//Toggle bits of a number expect first and last bits
//Check if given four integers (or sides) make rectangle
//Toggle all even bits of a number
//Toggle first and last bits of a number
//Set the Left most unset bit
//Check whether the bit at given position is set or unset
//Multiplication with a power of 2
//Check if n is divisible by power of 2 without using arithmetic operators
//Toggle all odd bits of a number
//Count set bits using Python List comprehension
//Check if a number is positive, negative or zero using bit operators
//Modify a bit at a given position
//CHAR_BIT in C
//Find One’s Complement of an Integer
//Set all the bits in given range of a number
//Count total bits in a number
//Find most significant set bit of a number
//Check if a number has two adjacent set bits
//Extract ‘k’ bits from a given position in a number
//Print ‘K’th least significant bit of a number
//Check if two numbers are equal without using comparison operators

//Check whether K-th bit is set or not
//Compare two integers without using any Comparison operator
//Set all even bits of a number
//Set all odd bits of a number
//Print numbers having first and last bits as the only set bits
//Write a function that returns 2 for input 1 and returns 1 for 2
//Subtract two numbers without using arithmetic operators
//
//
//Intermediate :
//
//Swap bits in a given number
//Little and Big Endian Mystery
//Smallest of three integers without comparison operators
//Find the two non-repeating elements in an array of repeating elements
//Write an Efficient C Program to Reverse Bits of a Number
//Swap all odd and even bits
//How to swap two bits in a given integer?
//Calculate square of a number without using *, / and pow()

//Print first n numbers with exactly two set bits
//Count all pairs of an array which differ in K bits
//Efficiently check if a string has duplicates without using any additional data structure
//Count trailing zero bits using lookup table
//Count smaller numbers whose XOR with n produces greater value
//Check divisibility in a binary stream
//Multiplication of two numbers with shift operator
//Determine if a string has all Unique Characters
//Next greater integer having one more number of set bits
//Check if two numbers are bit rotations of each other or not
//Previous smaller integer having one less number of set bits
//Maximize a given unsigned number number by swapping bits at it’s extreme positions
//Set bits in N equals to M in the given range
//Count number of distinct sum subsets within given range
//Baum Sweet Sequence
//Minimum digits to remove to make a number Perfect Square
//Number whose sum of XOR with given array range is maximum
//Odd numbers in N-th row of Pascal’s Triangle
//Check if bitwise AND of any subset is power of two
//Space optimization using bit manipulations
//Fast inverse square root
//Find one extra character in a string
//Number of unique triplets whose XOR is zero
//Fibbinary Numbers (No consecutive 1s in binary)
//Fibbinary Numbers (No consecutive 1s in binary) – O(1) Approach
//Divide two integers without using multiplication, division and mod operator
//Check if binary string multiple of 3 using DFA
//Count set bits in an integer using Lookup Table
//Alternate bits of two numbers to create a new number
//Decimal representation of given binary string is divisible by 20 or not
//Check if actual binary representation of a number is palindrome
//Reverse actual bits of the given number
//Addition of two numbers without carry

//Position of rightmost bit with first carry in sum of two binary
//Check whether the two numbers differ at one bit position only
//Count unset bits in a range
//Find largest element from array without using conditional operator
//Unset the last m bits
//Minimum flips to make all 1s in left and 0s in right | Set 1 (Using Bitmask)
//Find two numbers from their sum and XOR
//Count set bits in a range
//Unique element in an array where all elements occur k times except one
//Find Unique pair in an array with pairs of numbers
//Check whether the number has only first and last bits set
//M-th smallest number having k number of set bits.
//Minimum bitwise operations to convert given a into b
//Minimum flips required to maximize a number with k set bits
//Count unset bits of a number
//Check whether all the bits are unset in the given range or not
//Toggle all bits after most significant bit
//Position of rightmost common bit in two numbers
//Check whether all the bits are set in the given range
//Change all even bits in a number to 0
//Computing INT_MAX and INT_MIN with Bitwise operations
//Get the position of rightmost unset bit
//Position of rightmost different bit
//Check if all bits of a number are set
//XOR of all subarray XORs | Set 2
//Highest power of 2 less than or equal to given number
//Find Two Missing Numbers | Set 2 (XOR based solution)
//Find the maximum subset XOR of a given set
//
//Hard :
//
//Count total set bits in all numbers from 1 to n
//Program to count number of set bits in an (big) array
//Next higher number with same number of set bits
//Inserting m into n such that m starts at bit j and ends at bit i
