#include "main.h"
/**
 * print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
_puchar (i + '0');
i++;
}

_putchar ('\n');
}
