#include <stdio.h>
#include "function_pointers.h"

/**
 *	array_iterator - run a function on every element in an array
 *	@array: the array
 *	@size: array size
 *	@action: the function
 *	Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
