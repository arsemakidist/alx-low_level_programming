#include <stdio.h>
/**
* main - Entry point
*
* Return: Always returns 0
*/
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = 49; j <= 57; j++)
{
if ((j % 49) > (i % 48))
{
putchar((i % 48) + '0');
putchar((j % 49) + '0');
if (i != 56 || j != 57)
{
putchar('44');
putchar('32');
}
}
}
}
putchar ('\n');
return (0);
}
