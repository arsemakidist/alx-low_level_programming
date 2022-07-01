#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
printf("size of a char: 1 byte(s)", sizeof(char));
printf("Size of an int: 4 byte(s)", sizeof(int));
printf("Size of a long int: 8 byte(s)", sizeof(long int));
printf("Size of a long long int: 8 byte(s)", sizeof(long long int));
printf("Size of a float: 4 byte(s)", sizeof(float));
return (0);
}
