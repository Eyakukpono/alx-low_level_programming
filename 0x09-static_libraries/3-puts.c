#include <stdio.h>
#include "main.h"

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}
