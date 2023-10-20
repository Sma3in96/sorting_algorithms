#include "sort.h"
/**
* selection_sort - sorting an array using selection sort
* @array: array to sort
* @size: size of array
* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, new_start, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		new_start = i;
		for (j = new_start + 1; j < size; j++)
		{
			if (array[new_start] > array[j])
				new_start = j;
		}
		temp = array[new_start];
		array[new_start] = array[i];
		array[i] = temp;
	}
}
