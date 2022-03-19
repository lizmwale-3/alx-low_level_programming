#include "main.h"
/**
 * print_numbers - entry point 
 * Return: Always 0.
 */
void print_numbers(void)
{
int numbers; 

numbers = 0;
while (numbers < 10)
{
_putchar (numbers + '0');
numbers++;
}

_putchar ('\n')
}
