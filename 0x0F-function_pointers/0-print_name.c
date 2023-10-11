#include "function_pointers.h"

/**
 * print_name - printes name
 * @name: name to print
 * @f: functions
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
