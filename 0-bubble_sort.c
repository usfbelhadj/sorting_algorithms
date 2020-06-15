#include "sort.h"
/**
*bubble_sort - Function that sorts an array
*@array: array of ints
*@size: size of array
*/
void bubble_sort(int *array, size_t size)
{
int tmp;
size_t j, i = 0;

if (!array || !size)
return;
while (i < size)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
}
}
i++;
}
}
