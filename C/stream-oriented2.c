#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fileName; // pointer variable; first step
	char ch[100];

	fileName = fopen("filename.txt", "r");
	printf("%s", fgets(ch, 50, fileName));
	
	fclose(fileName);

	/**
	 * getc - reads a character from a file
	 * getw - reads an integer
	 * fgwts - reads strinfg of characters from a file
	 *
	 * putc - write character
	 * putsw - write integer
	 * fprints - prints formatted string
	 */
}
