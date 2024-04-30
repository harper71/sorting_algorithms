#include "sort.h"
/**
 * insertion_sort_list - implements the insertion sorting
 * @list: this is a list of elements 
*/
void insertion_sort_list(int arr[], int size)
{
	int temp;
 
    size_t i, j;

	for (i = 0; i < size; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			print_array(arr, size);
			j--;
			
		}
		arr[j + 1] = temp;
	}
}