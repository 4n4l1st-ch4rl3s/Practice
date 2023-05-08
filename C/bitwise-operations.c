#include <stdio.h>

int main()
{
	// & = AND
	// | = OR
	// ^ = XOR
	// << = left shift
	// >> = right shift
	
	int x = 6; /* 6 = 00000110 */
	int y = 12; /* 12 = 00001100 */
	int z = 0; /* 0 = 00000000 */

	printf("The value of x is: %d\n", x);
	printf("The value of y is: %d\n", y);
	printf("The value of z is: %d\n", z);

	z = x & y; /* 6 & 12 same as 00000110 & 00001100 */
	printf("AND: %d\n", z);

	z = x | y;
	printf("OR: %d\n", z);

	z = x ^ y;
	printf("XOR: %d\n", z);

	z = x << 2;
	printf("SHIFT LEFT for x: %d\n", z);
	z = y << 2;
	printf("SHIFT LEFT for y: %d\n", z);

	z = x >> 2;
	printf("RIGHT SHIFT for x: %d\n", z);
	z = y >> 2;
	printf("RIGHT SHIFT for y: %d\n", z);

	return (0);
}
