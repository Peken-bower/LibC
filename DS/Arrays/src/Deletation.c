#include "../inc/Array.h"

/*
    * Delete an element from an array
    * @param array: pointer to the array
    * @param index: index of the element to be deleted
    * @return: void
    * @time-complexity: O(n) && Ω(1) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Delete(Array *array, int index)
{
    if (index >= 0 && index < array->size)
    {
        for (int i = index; i < array->size - 1; i++)
            array->arr[i] = array->arr[i + 1];
        array->size--;
    }
}