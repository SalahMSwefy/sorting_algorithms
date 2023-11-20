#include "sort.h"

/**
 * selection_sort - sorting array using selection sort algorithm
 * @array: the array of ints
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		if (i != min)
			print_array(array, size);
	}
}