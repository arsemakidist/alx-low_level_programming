#include <stdio.h>
/**
* mai = Entry point
*
* Return = Always 0 (Success/Correct)
*/
int main(void)
{
int number;
for (number = 40; number <= 57; number++)
{
putchar(number);
if (number == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
