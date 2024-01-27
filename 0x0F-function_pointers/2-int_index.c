#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array of integers to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare integers.
 *
 * Return: The index of the 1st element for which the comparison function returns non-zero.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
}
return (-1);
}

