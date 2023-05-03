#include <stdio.h>
#include <string.h>

int main()
{
	char string1[] = "Patience";
	char string2[] = "jovian";

	/* strlwr(string1); */
	/* strupr(string2); */

	printf("%s\n", strlwr(string1)); // convert to lower
	printf("%s\n", strupr(string2)); // coverts to upper

	return (0);
}
