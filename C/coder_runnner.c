// sum of all natural numbers

#include <stdio.h>

int sum(int n); // prototype

int main()
{
	int number, result;

	printf("Please enter a positive number: ");
	scanf("%d", &number);
	result = sum(number);
	printf("Sum = %d", result);
	return (0);
}

int sum(int n)
{
	if (n != 0)
		// function sum is calling it self
		return (n + sum(n - 1));
	else
		return (n);
}
