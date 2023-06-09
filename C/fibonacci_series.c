//fibonacci series

#include <stdio.h>

int fibo(int n);

int main()
{
	int n = 8;
	int i;

	printf("Fibonacci sequence of %d is: ", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", fibo(i));
	}
	return (0);
}

int fibo(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fibo(n - 1) + fibo(n - 2));
}
