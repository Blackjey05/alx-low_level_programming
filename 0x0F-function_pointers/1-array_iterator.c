#include"function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on    each element of an array.
 * @*array: pointer to int array
 * @size: is the size of the array
 * @*void - ointer to a fuction
 *
 * Return: nothing
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
