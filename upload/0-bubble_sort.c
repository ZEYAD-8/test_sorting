#include "sort.h"

/**
 * swap - Swap function
 * @xp: pointer to address of x
 * @yp: pointer to address of y
 * Return: NULL
*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 *bubble_sort - Sorts an array of integers in ascending order using Bubble
 *sort algorithm.
 *@array: array of ints
 *@size: size of array
 *
 * Return: Void
 */
void bubble_sort(int *array, unsigned int size)
{
	size_t swapped, i, j;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j ++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
