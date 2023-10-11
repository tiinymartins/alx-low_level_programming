#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: the array
 * @size: size of array
 * @action: function to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
