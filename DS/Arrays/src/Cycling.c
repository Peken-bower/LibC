#include "../inc/Array.h"
/*
    * Cycle an array
    * @param array: pointer to the array
    * @param index: index from where the array is to be cycled
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(n) && Ω(n) && Θ(n)
*/
void Cycle(Array* array, int index){
    Array* temp =  NULL;
    temp->Create(array->size);
    for(int i = 0; i < array->size; i++)
        temp->arr[i] = array->arr[i];
    for(int i = 0; i < array->size; i++)
        array->arr[(i + index) % array->size] = temp->arr[i];
}