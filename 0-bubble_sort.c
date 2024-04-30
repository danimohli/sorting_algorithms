#include "sort.h"
/**
 * bubble_sort - Sorts an array of int in ascending order using Bubble Sort
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int temp, swap;

	if (array == NULL || size == 0)
		return;

	for (x = 0; x < size - 1; ++x)
	{
		swap = 0;
		for (y = 0; y < size - x - 1; ++y)
		{
			if (array[y] > array[y + 1])
			{
				/* Swap array[y] and array[y + 1]*/
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				swap = 1;
				/* Print the array*/
				print_array(array, size);
			}
		}
		/*If no 2 elements swapd in d inner loop, then d array is sort*/
		if (swap == 0)
			break;
	}
}
