#include "function_pointers.h"
/**
 * array_iterator - Applies a given function to each element of an array.
 * @array: The array of integers to be processed.
 * @size: The number of elements in the array.
 * @action: A pointer to the function that will be applied to each element.
 *
 * Return: void (no return value)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
