#include "../inc/Array.h"

/*
    * Search an element in an array
    * @param array: pointer to the array
    * @param element: element to be searched
    * @return: void
    * @time-complexity: O(n) && Ω(1) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Search(Array* array, int element){
    for(int i = 0; i < array->size; i++)
        if(array->arr[i] == element){
            printf("Element found at index %d\n", i);
            return;
        }
    printf("Element not found\n");
}