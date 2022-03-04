
//bits.c


//Add two number in binary representation 
//Given a screen in form of byte array with width and start and end points of a horizontal line. Draw this line DrawHorizontalLine.java
//Given an array in which every number occurs 3 times find this one number occurring only once - 
//Given an integer find next higher/lower integer with same number of set bits as original integer - 
//Given an integer find next power of 2 greater than this integer
//Given an array find one/two number occurring odd number of times
//Square of a number without using * or ^ operator
//Find two missing number where there are n-2 unique numbers in range 1 to n. Find one missing and one repeated number where all //numbers are in range 1 to n.
//Get first 2^n gray code - GrayCode.java
//Convert a binary code to integer
//Flip the bits of given number
//Find the most significant set bit of a number
//Quickly check if bits in a number are in alternate pattern

//Macro to set a bit
#define bitset(byte,nbit)   ((byte) |=  (1<<(nbit)))

//Clear a bit
#define bitclear(byte,nbit) ((byte) &= ~(1<<(nbit)))
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))

//Toggle a bit
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))

//Checking if bit at nth position is set or not
#define bitcheck(byte,nbit) ((byte) &   (1<<(nbit)))


//Modify a bit at a given position
Given a number n, a position p and a binary value b, we need to change the bit at position p in n to value b.

Examples : 

Input : n = 7, p = 2, b = 0
Output : 3
7 is 00000111 after clearing bit at 
2rd position, it becomes 0000011.
 
We first create a mask that has set bit only 
at given position using bit wise shift.
      mask = 1 << position

Then to change value of bit to b, we first
make it 0 using below operation
      value & ~mask

After changing it 0, we change it to b by
doing or of above expression with following
(b << p) & mask, i.e., we return
      ((n & ~mask) | (b << p))
  
// CPP program to modify a bit at position
// p in n to b.
#include <bits/stdc++.h>
using namespace std;
 
// Returns modified n.
int modifyBit(int n, int p, int b)
{
    int mask = 1 << p;
    return ((n & ~mask) | (b << p));
}
 
// Driver code
int main()
{
    cout << modifyBit(6, 2, 0) << endl;
    cout << modifyBit(6, 5, 1) << endl;
    return 0;
}
 
//Show bits
// C program to demonstrate the
// showbits() function
#include <stdio.h>
void showbits (int n)
{
  int i, k, andmask;
 
  for (i = 15; i >= 0;i--)
  {
    andmask = 1 << i;
    k = n & andmask;
    k == 0 ? printf ("0") : printf ("1");
  }
}
 
// Driver code
int main()
{
  showbits(5);   
  return 0;
}
Output
0000000000000101

Explanation

All that is being done in this function is using an AND operator and a variable andmask. andmask variable is used to check the status of individual bits. If the bit is OFF we print a 0 otherwise we print a 1.
The first time through the loop, the variable andmask will contain the value 1000000000000000, which is obtained by left-shifting 1, fifteen places.
If the variable n’s most significant bit is 0, then k would contain a value 0, otherwise, it would contain a non-zero value.
If k contains 0 then printf( ) will print out 0 otherwise it will print out 1.
On the second go-around of the loop, the value of i is decremented, and hence the value of andmask changes, which will now be 100000000000000. This checks whether the next most significant bit is 1 or 0, and prints it out accordingly. The same operation is repeated for all bits in the number.

//Add without using + operator [Half adder logic]
  
Above is simple Half Adder logic that can be used to add 2 single bits. We can extend this logic for integers. If x and y don’t have set bits at same position(s), then bitwise XOR (^) of x and y gives the sum of x and y. To incorporate common set bits also, bitwise AND (&) is used. Bitwise AND of x and y gives all carry bits. We calculate (x & y) << 1 and add it to x ^ y to get the required result. 
// C Program to add two numbers
// without using arithmetic operator
#include<stdio.h>
 
int Add(int x, int y)
{
    // Iterate till there is no carry 
    while (y != 0)
    {
        // carry now contains common
        //set bits of x and y
        unsigned carry = x & y; 
 
        // Sum of bits of x and y where at
        //least one of the bits is not set
        x = x ^ y;
 
        // Carry is shifted by one so that adding
        // it to x gives the required sum
        y = carry << 1;
    }
    return x;
}
 
int main()
{
    printf("%d", Add(15, 32));
    return 0;
}
  
  
//Full adder logic


//Subtract two numbers without using arithmetic operators
Write a function subtract(x, y) that returns x-y where x and y are integers. The function should not use any of the arithmetic operators (+, ++, –, -, .. etc). 
The idea is to use bitwise operators. Addition of two numbers has been discussed using Bitwise operators. Like addition, the idea is to use subtractor logic. 
The truth table for the half subtractor is given below. 

X     Y     Diff     Borrow
0     0     0     0
0     1     1     1
1     0     1     0
1     1     0     0
  
From the above table one can draw the Karnaugh map for “difference” and “borrow”.
So, Logic equations are: 

    Diff   = y ⊕ x
    Borrow = x' . y 
      
  // C program to Subtract two numbers
// without using arithmetic operators
#include<stdio.h>
 
int subtract(int x, int y)
{
    // Iterate till there
    // is no carry
    while (y != 0)
    {
        // borrow contains common
        // set bits of y and unset
        // bits of x
        int borrow = (~x) & y;
 
        // Subtraction of bits of x
        // and y where at least one
        // of the bits is not set
        x = x ^ y;
 
        // Borrow is shifted by one
        // so that subtracting it from
        // x gives the required sum
        y = borrow << 1;
    }
    return x;
}
 
// Driver Code
int main()
{
    int x = 29, y = 13;
    printf("x - y is %d", subtract(x, y));
    return 0;
}

Output : 

x - y is 16
Time Complexity: O(log y)

Auxiliary Space: O(1)

//Multiply without using x operator
One interesting method is the Russian peasant algorithm. The idea is to double the first number and halve the second number repeatedly till the second number doesn’t become 1. In the process, whenever the second number become odd, we add the first number to result (result is initialized as 0) 
The following is simple algorithm. 
  Let the two given numbers be 'a' and 'b'
1) Initialize result 'res' as 0.
2) Do following while 'b' is greater than 0
   a) If 'b' is odd, add 'a' to 'res'
   b) Double 'a' and halve 'b'
3) Return 'res'. 
  
  
#include <iostream>
using namespace std;
 
// A method to multiply two numbers using Russian Peasant method
unsigned int russianPeasant(unsigned int a, unsigned int b)
{
    int res = 0; // initialize result
 
    // While second number doesn't become 1
    while (b > 0)
    {
        // If second number becomes odd, add the first number to result
        if (b & 1)
            res = res + a;
 
        // Double the first number and halve the second number
        a = a << 1;
        b = b >> 1;
    }
    return res;
}
 
// Driver program to test above function
int main()
{
    cout << russianPeasant(18, 1) << endl;
    cout << russianPeasant(20, 12) << endl;
    return 0;
}

Output: 

18
240
Time Complexity: O(log2b)

Auxiliary Space: O(1)

How does this work? 
The value of a*b is same as (a*2)*(b/2) if b is even, otherwise the value is same as ((a*2)*(b/2) + a). In the while loop, we keep multiplying ‘a’ with 2 and keep dividing ‘b’ by 2. If ‘b’ becomes odd in loop, we add ‘a’ to ‘res’. When value of ‘b’ becomes 1, the value of ‘res’ + ‘a’, gives us the result. 
Note that when ‘b’ is a power of 2, the ‘res’ would remain 0 and ‘a’ would have the multiplication. See the reference for more information.
  
Reference: 
http://mathforum.org/dr.math/faq/faq.peasant.html


//Divide 2 nos without using / operator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
// Function to perform division `x/y` of two numbers `x` and `y`
// without using the division operator in the code
int divide(int x, int y)
{
    // handle divisibility by 0
    if (y == 0)
    {
        printf("Error!! Divisible by 0");
        exit(-1);
    }
 
    // store sign of the result
    int sign = 1;
    if (x * y < 0) {
        sign = -1;
    }
 
    // convert both dividend and divisor to positive
    x = abs(x);
    y = abs(y);
 
    unsigned mask = 1;
    unsigned quotient = 0;
 
    while (y <= x)
    {
        y <<= 1;
        mask <<= 1;
    }
 
    while (mask > 1)
    {
        y >>= 1;
        mask >>= 1;
        if (x >= y)
        {
            x -= y;
            quotient |= mask;
        }
    }
 
    printf("The remainder is %d\n", x);
    return sign * quotient;
}
 
int main()
{
    int dividend = 22;
    int divisor = -7;
 
    printf("The quotient is %d\n", divide(dividend, divisor));
 
    return 0;
}
//Divisible by 2 using right shift operation
//Multiply by 2 using left shift operator
//Find xor without using xor
//Calculate 2^n
//Check if given 32 bit integer is power of 2
//Add 1 to a given number
//Find whether a given number is a power of 4 or not
//Add two bit strings
//Check if two numbers are equal without using arithmetic and comparison operators
//Efficient method for 2’s complement of a binary string
//Multiplication with a power of 2
//Find One’s Complement of an Integer
//Compare two integers without using any Comparison operator
//Addition of two numbers without carry
//Calculate square of a number without using *, / and pow()
//Divide two integers without using multiplication, division and mod operator
//Smallest of three integers without comparison operators
//Multiplication of two numbers with shift operator
//Find largest element from array without using conditional operator
//Inverting every bit of a number/1s complement
//2s complement of the no.
//Stripping off the lowest set bit
//Given register address how to write a value to it.
//Conversions of a given number
//To sum of given digits
//Reverse a number without recursion
//To check the given number is factorial or not
//Rotation of bits
//To check whether little endian to big endian
//To convert 32 bit from LE to BE
//Little and Big Endian Mystery
//S to I
//I to S

//Set - types
//Set mth to nth bit
//Set the Left most unset bit
//Set all even bits of a number
//Set all odd bits of a number
//Set all the bits in given range of a number
//Print numbers having first and last bits as the only set bits
//Set bits in N equals to M in the given range
//Inserting m into n such that m starts at bit j and ends at bit i
//Print first n numbers with exactly two set bits
//Next greater integer having one more number of set bits
//Program to count number of set bits in an (big) array
//Next higher number with same number of set bits
//Getting lowest set bit of a number

//Position - types
//Find position of the only set bit
//Find bit at a position
//Extract ‘k’ bits from a given position in a number

//Clear - types
//Clear all bits from lsb to ith bit
//Clearing all bits from msb to ith bit
//How to turn off a particular bit in a number?
//Unset bits in the given range
//Change all even bits in a number to 0
//Unset the last m bits

//Toggle - types
//Toggle case of a string using Bitwise operators
//Toggling k-th bit of a number
//Toggle all the bits of a number except k-th bit
//Toggle the last m bits
//Toggle bits in the given range
//Toggle bits of a number expect first and last bits
//Calculate XOR from 1 to n
//Toggle all even bits of a number
//Toggle first and last bits of a number
//For every set bit of a number toggle bits of other
//Toggle all odd bits of a number
//Minimum flips to make all 1s in left and 0s in right | Set 1 (Using Bitmask)
//Toggle all bits after most significant bit
//Direct XOR without using loops
//Game of XOR

//Swap - types
//Quickest way to swap 2 no.s
//Swap every bits
//Swap all odd & even bits
//To swap bits in a given number 
//How to swap two numbers without using a temporary variable?
//Swap two nibbles in a byte
//Shift even & odd positions
//To interchange the bits in two given numbers
//To interchange the bits in a given number
//Swap three variables without using temporary variable
//Swap every two bits in bytes
//Swap bits in a given number
//How to swap two bits in a given integer?

//Write an Efficient C Program to Reverse Bits of a Number
//Reverse actual bits of the given number

//Rightmost - types
//Position of rightmost set bit
//To clear rightmost set bit
//Position of rightmost set bit
//Turn off rightmost set bit
//Count total set bits in all nos from 1 to n
//Check if a number is even or odd
//Set the rightmost unset bit
//Find most significant set bit of a number
//Position of rightmost bit with first carry in sum of two binary
//Position of rightmost common bit in two numbers
//Get the position of rightmost unset bit
//Position of rightmost different bit

//Checking - types
//Check if given four integers (or sides) make rectangle
//Check whether the bit at given position is set or unset
//Check if n is divisible by power of 2 without using arithmetic operators
//Detect if two integers have opposite signs
//Check for Integer Overflow
//Check if a number has bits in alternate pattern
//Check if a number is positive, negative or zero using bit operators
//Check if a number has two adjacent set bits
//Check if two numbers are equal without using comparison operators
//Check whether K-th bit is set or not
//Check whether the two numbers differ at one bit position only
//Check if all bits of a number are set
//Check whether all the bits are set in the given range
//Check whether the number has only first and last bits set
//Check whether all the bits are unset in the given range or not
//Check if two numbers are bit rotations of each other or not

//Count - types
//Count set bits in integer
//Count number of bits to be flipped to convert A to B
//Count total bits in a number
//Count minimum bits to flip such that XOR of A and B equal to C
//Count unset bits of a number
//Count unset bits in a range
//Count set bits in a range
//Count all pairs of an array which differ in K bits
//Count trailing zero bits using lookup table
//Count smaller numbers whose XOR with n produces greater value
//Count total set bits in all numbers from 1 to n

//Occurences - types
//Odd occurring element
//Missing number array
//Find the element that appears once
//Find the Number Occurring Odd Number of Times
//Find the two non-repeating elements in an array of repeating elements
//Efficiently check if a string has duplicates without using any additional data structure
//Determine if a string has all Unique Characters
//Fibbinary Numbers (No consecutive 1s in binary) – O(1) Approach
//Find Two Missing Numbers | Set 2 (XOR based solution)
//Unique element in an array where all elements occur k times except one

//Find the largest number with n set and m unset bits
//Find the smallest number with n set and m unset bits
//M-th smallest number having k number of set bits.
//Print ‘K’th least significant bit of a number
//Write a function that returns 2 for input 1 and returns 1 for 2

//Index of a extra element
//Power set

