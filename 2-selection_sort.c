#include "sort.h"
/**
 * selection_sort - Sorts array of int in ascending order Selection Sort
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, index;
	int temp;

	for (x = 0; x < size - 1; ++x)
	{
		index = x;
		for (y = x + 1; y < size; ++y)
		{
			if (array[y] < array[index])
				index = y;
		}
		if (index != x)
		{
			temp = array[x];
			array[x] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
