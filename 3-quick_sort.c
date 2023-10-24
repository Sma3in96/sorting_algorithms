#include "sort.h"
/**
 * int_swap - swap two int
 * @a: 1st int
 * @b: 2nd int
 * Return: void
 */
void int_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * index_of_pivot - find correct index of pivot
 * @array: array
 * @size: size of array
 * @indexlow: low
 * @indexhigh: high
 * Return: int
 */
int index_of_pivot(int *array, size_t size, int indexlow, int indexhigh)
{
	int i, j;

	i = indexlow - 1;
	for (j = indexlow; j <= indexhigh; j++)
	{
		if (array[j] < array[indexhigh])
		{
			i++;
			int_swap(&array[j], &array[i]);
			print_array(array, size);
		}
	}
	int_swap(&array[i + 1], &array[indexhigh]);
	print_array(array, size);
	return (i + 1);
}
/**
 * sort_recu - function recu
 * @array: array to sort
 * @size: size of array
 * @indexlow: start
 * @indexhigh: end
 * Return: void
 */
void sort_recu(int *array, size_t size, int indexlow, int indexhigh)
{
	int pivot;

	if (indexhigh > indexlow)
	{
		pivot = index_of_pivot(array, size, indexlow, indexhigh);
		sort_recu(array, size, indexlow, pivot - 1);
		sort_recu(array, size, pivot + 1, indexhigh);
	}
}
/**
 * quick_sort - sorting an array with quick sort
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	sort_recu(array, size, 0, size - 1);
}
