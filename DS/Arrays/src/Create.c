#include "../inc/Array.h"

/*
    * Create an array
    * @param capacity: capacity of the array
    * @return: pointer to the array
    * @time-complexity: O(1) && Ω(1) && Θ(1)
    * @space-complexity: O(1) && Ω(1) && Θ(1)
*/
Array* Create(int capacity){
    Array* array = (Array*)malloc(sizeof(Array));
    array->arr = (int*)malloc(capacity * sizeof(int));
    array->capacity = capacity;
    array->size = 0;
    array->Create = Create;
    array->Cycle = Cycle;
    array->Delete = Delete;
    array->Insert = Insert;
    array->Update = Update;
    array->Traverse = Traverse;
    array->Search = Search;
    array->Max = Max;
    array->Min = Min;
    array->Sum = Sum;
    array->Reverse = Reverse;
    array->Sort = Sort;
    array->Merge = Merge;
    array->Split = Split;
    return array;
}

