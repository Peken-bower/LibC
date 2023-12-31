#include "../inc/Array.h"

/*
    * Reverse an array
    * @param array: pointer to the array
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Reverse(Array* array){
    for(int i = 0, j = array->size - 1; i < j; i++, j--){
        int temp = array->arr[i];
        array->arr[i] = array->arr[j];
        array->arr[j] = temp;
    }
}