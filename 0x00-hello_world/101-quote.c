#include <unistd.h>
/**
 * main -write a c program that prints to the standard error
 *
 * Return: 1(Failed)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
