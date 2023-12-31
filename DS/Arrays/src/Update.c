#include "../inc/Array.h"

/*
    * Update an element in an array
    * @param array: pointer to the array
    * @param index: index of the element to be updated
    * @param element: element to be updated
    * @return: void
    * @time-complexity: O(1) && Ω(1) && Θ(1)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Update(Array* array, int index, int element){
    if(index >= 0 && index < array->size)
        array->arr[index] = element;
}