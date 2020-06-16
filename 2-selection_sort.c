#include "sort.h"
/**
* selection_sort - selection sort function
 * @array: sorting array
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0, j, k;

int temp;

if (!array || !size)
return;
while (i + 1 < size)
{
k = i;
j = i + 1;
while (j < size)
{
if (array[j] < array[k])
{
k = j;
}
j++;
}
if (array[i] > array[k])
{
temp = array[i];
array[i] = array[k];
array[k] = temp;
print_array(array, size);
}
i++;
}
}
