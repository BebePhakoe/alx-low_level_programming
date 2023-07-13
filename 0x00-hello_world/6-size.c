#include <stdio.h>
/**
 * main - Entry Point
 * Return Always 0 (Success)
 */
int main(void)
{
	char a;
	int z;
	long int k; 
	long long int w;
	float g;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}
