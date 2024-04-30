#include "sort.h"
/**
 * bubble_sort - bubble sorting algorithm
 * @arr: array of elements
 * @size: size of array elements
*/
void bubble_sort(int arr[], size_t size)
{
    size_t i, j;

    int temp;

	for (i = 0; i < size - 1; i++)
	{
		temp = 0;

		for (j = 0; j < size - 1 - i; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];

				arr[j] = arr[j + 1];

				arr[j + 1] = temp;
			}
            print_array(arr, size);
		}
	}
}