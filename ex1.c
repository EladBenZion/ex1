/******************
Name: Elad Ben Zion
ID: I_AM_NOT_GOING_TO_SHOW_IT_IN_GITHUB
Assignment: ex01
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="
int main()
{
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
    printf("Please enter a character\n");

    char c = getchar();

    printf("Its numerical value is: %d\n", (int)c);
    printf("0 for even, 1 for odd: %d", c & 1);

    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    printf("Please enter a negative integer\n");

    int n;
    scanf("%d", &n);

    int onesComplement = ~n;
    printf("1's complement: %d\n", onesComplement);

    unsigned int unsignedValue = (unsigned int)n;
    printf("unsigned: %u", unsignedValue);

    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
    printf("Please enter 3 integers\n");

    int value;
    int shiftRight;
    int shiftLeft;
    scanf("%d %d %d", &value, &shiftRight, &shiftLeft);

    int afterRight = value >> shiftRight;
    int afterBoth = afterRight << shiftLeft;

    printf("After shifting right and left: %d", afterBoth);

    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
        If at least two of them are even - print 0.
        If at least two of them are odd - print 1. */
    printf("Please enter 3 integers\n");

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int oddCount = (x & 1) + (y & 1) + (z & 1);
    int result = oddCount >> 1;

    printf("0 - most of them are even, 1 - most of them are odd: %d", result);

    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
    printf("Please enter two numbers in octal and hexadecimal bases\n");

    int octVal;
    int hexVal;
    scanf("%o %x", &octVal, &hexVal);

    int octLSB = octVal & 1;
    int hexLSB = hexVal & 1;

    int octMSB = (octVal >> 31) & 1;
    int hexMSB = (hexVal >> 31) & 1;

    printf("LSBs: %d %d\n", octLSB, hexLSB);
    printf("MSBs: %d %d\n", octMSB, hexMSB);

    printf("Bye!");
    return 0;
}

