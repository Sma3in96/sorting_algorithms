#include "sort.h"
#include <stddef.h>
/**
* bubble_sort - sort an array using bubble sort
* @array: array to sort
* @size: size of the array
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	int flag = 1;

	int temp;

	size_t i;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
	}
}
