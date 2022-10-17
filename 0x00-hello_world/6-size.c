#include <stdio.h>
/**
 * main -print out sizes of data types in c
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %li byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %ld byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
