#include "sort.h"
/**
 * bubble_sort - bubble sorting algorithm
 * @array: array of elements
 * @size: size of array elements
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}

	temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{

			if (array[j] > array[j + 1])
			{
				temp = array[j];

				array[j] = array[j + 1];

				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}

