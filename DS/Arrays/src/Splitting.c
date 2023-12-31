#include "../inc/Array.h"

/*
    * Split an array into two arrays
    * @param array1: pointer to the first array
    * @param array2: pointer to the second array
    * @param array3: pointer to the third array
    * @return: void
    * @time-complexity: O(n) && Ω(n) && Θ(n)
    * @space-complexity: O(n) && Ω(n) && Θ(n)
*/
void Split(Array* array1, Array* array2, Array* array3){
    int i = 0, j = 0, k = 0;
    while(i < array1->size){
        if(array1->arr[i] % 2 == 0)
            array2->arr[j++] = array1->arr[i++];
        else
            array3->arr[k++] = array1->arr[i++];
    }
    array2->size = j;
    array3->size = k;
}