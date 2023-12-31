#include "../inc/Array.h"

/*
    * Insert an element in an array
    * @param array: pointer to the array
    * @param index: index of the element to be inserted
    * @param element: element to be inserted
    * @return: void
    * @time-complexity: O(n) && Ω(1) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Insert(Array *array, int index, int element)
{
    (void)element;
    if(index >= 0 && index <= array->size)
    {
        for(int i = array->size; i > index; i--)
            array->arr[i] = array->arr[i - 1];
        array->size--;
    }
}