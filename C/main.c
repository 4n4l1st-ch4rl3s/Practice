#include <stdio.h>
#include "pi_preproc.h"
#include "age.h"
#include "multiply.h"

int main()
{
	printf("PI as defined is: %.5lf\n", PI_PREPROC);
	printf("Age as defined in header file: %d", AGE);

	int result = MULTIPLY(20, 30);
	printf("Result of Multiply is: %d", result);
	return (0);
}
