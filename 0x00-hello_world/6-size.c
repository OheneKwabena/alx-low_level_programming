#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{

	printf("Sizeof of a char: %lu byte(s)\n", sizeof(char));
	printf("Sizeof of an int: %lu byte(s)\n", sizeof(int));
	printf("Sizeof of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Sizeof of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Sizeof of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

