#include "../inc/Array.h"

/*
    * Merge two arrays
    * @param array1: pointer to the first array
    * @param array2: pointer to the second array
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(n) && Ω(n) && Θ(n)
*/
Array *Merge(Array* array1, Array* array2){
    Array* array3 = Create(array1->size + array2->size);
    int i = 0, j = 0, k = 0;
    while(i < array1->size && j < array2->size){
        if(array1->arr[i] < array2->arr[j])
            array3->arr[k++] = array1->arr[i++];
        else
            array3->arr[k++] = array2->arr[j++];
    }
    for(; i < array1->size; i++)
        array3->arr[k++] = array1->arr[i];
    for(; j < array2->size; j++)
        array3->arr[k++] = array2->arr[j];
    array3->size = array1->size + array2->size;
    return (array3);
}