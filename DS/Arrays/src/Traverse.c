#include "../inc/Array.h"

/*
    * Traverse an array
    * @param array: pointer to the array
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Traverse(Array* array)
{
    for(int i = 0; i < array->size; i++)
        printf("%d ", array->arr[i]);
    printf("\n");
}