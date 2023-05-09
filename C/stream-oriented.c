#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// stream-oriented data files - data is stored in the same manner as it appears on the screen.
// system-oriented data files - data files are more closely associated with the os.

/**
 * File operation
 * - Creation of a new file
 * - openimg, reading, writing data
 * - closing the file
 */

/**
 * STEPS
 * Declare a file pointer variable
 * Open a file using fopen()
 * Process the file using the suitable function
 * close the file using fclose() function
 */

/**
 * FUNCTIONS
 * fopen, fclose, getc, putc, getw(get integer), putw(put interger), fprintf, fscanf, fgets, fputs, feof
 */

int main()
{
	FILE *fp;
	fp = fopen("filename.txt", "w");
	// Processing of the file
	fprintf(fp, "%s", "Hello world");

	// end of processing
	fclose(fp);

	return (0);
}
