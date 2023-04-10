#include <stdio.h>
#include "main.h"

/**
* main - entry point
*
* @argc: amount of arguments, passed to the function
* @argv: argument variable
*
* Return: 0 if Success
*/

int main(int argc, char *argv[])

{

int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
