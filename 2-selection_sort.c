#include "sort.h"
/**
 * selection_sort - 
*/
void selection_sort(int arr[], size_t size)
{
	int temp;

    size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for ( j = i + 1; j < size; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
			if (min != i)
			{
				temp = arr[i];

				arr[i] = arr[min];

				arr[min] = temp;

				print_array(arr, size);
			}			
	}
}