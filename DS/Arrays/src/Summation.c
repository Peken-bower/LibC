#include "../inc/Array.h"

/*
    * Find sum of all elements in an array
    * @param array: pointer to the array
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
void Sum(Array* array){
    int sum = 0;
    for(int i = 0; i < array->size; i++)
        sum += array->arr[i];
    printf("Sum of all elements is %d\n", sum);
}
