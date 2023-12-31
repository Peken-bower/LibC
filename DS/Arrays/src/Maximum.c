#include "../inc/Array.h"

/*
    * Find maximum element in an array
    * @param array: pointer to the array
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Max(Array* array){
    int max = array->arr[0];
    for(int i = 1; i < array->size; i++)
        if(array->arr[i] > max)
            max = array->arr[i];
    printf("Maximum element is %d\n", max);
}