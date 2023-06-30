#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name- function that calls on function f to print a name
 * @name: name to print
 * @(*f): function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;

	f(name);
}
