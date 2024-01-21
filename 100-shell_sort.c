#include "sort.h"
/**
 * shell_sort - The function
 * @array: the array
 * @size: the size
 */
void shell_sort(int *array, size_t size)
{
unsigned int interval = 1, i, idx;
int val_insert;

	if (array == NULL || size < 2)
		return;

	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (i = interval ; i < size; i++)
		{
			val_insert = array[i];
			idx = i;
			while (idx > interval - 1 && array[idx - interval] >= val_insert)
			{
				array[idx] = array[idx - interval];
				idx = idx - interval;
			}
		array[idx] = val_insert;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
