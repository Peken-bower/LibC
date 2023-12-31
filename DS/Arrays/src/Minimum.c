#include "../inc/Array.h"

/*
    * Find minimum element in an array
    * @param array: pointer to the array
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Min(Array* array){
    int min = array->arr[0];
    for(int i = 1; i < array->size; i++)
        if(array->arr[i] < min)
            min = array->arr[i];
    printf("Minimum element is %d\n", min);
}