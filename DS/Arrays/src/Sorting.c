#include "../inc/Array.h"

/*
    * Sort an array
    * @param array: pointer to the array
    * @return: void
    * @time-complexity: O(n^2) && Ω(n) && Θ(n^2)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Sort(Array* array){
    for(int i = 0; i < array->size - 1; i++)
        for(int j = i + 1; j < array->size; j++)
            if(array->arr[i] > array->arr[j]){
                int temp = array->arr[i];
                array->arr[i] = array->arr[j];
                array->arr[j] = temp;
            }
}
