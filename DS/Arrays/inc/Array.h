#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Array structure
    * @param arr: pointer to the array
    * @param capacity: capacity of the array
    * @param size: size of the array
*/
typedef struct s_Array{
    int* arr;
    int capacity;
    int size;
    struct s_Array* (*Create)(int);
    void (*Traverse)(struct s_Array*);
    void (*Insert)(struct s_Array*, int, int);
    void (*Delete)(struct s_Array*, int);
    void (*Search)(struct s_Array*, int);
    void (*Update)(struct s_Array*, int, int);
    void (*Sort)(struct s_Array*);
    struct s_Array *(*Merge)(struct s_Array*, struct s_Array*);
    void (*Reverse)(struct s_Array*);
    void (*Max)(struct s_Array*);
    void (*Min)(struct s_Array*);
    void (*Sum)(struct s_Array*);
    void (*Split)(struct s_Array*, struct s_Array*, struct s_Array*);
    void (*Cycle)(struct s_Array*, int);
}Array;

Array* Create(int capacity);
void Cycle(Array* array, int index);
void Delete(Array *array, int index);
void Insert(Array *array, int index, int element);
void Update(Array* array, int index, int element);
void Traverse(Array* array);
void Search(Array* array, int element);
void Max(Array* array);
void Min(Array* array);
void Sum(Array* array);
void Reverse(Array* array);
void Sort(Array* array);
Array *Merge(Array* array1, Array* array2);
void Split(Array* array1, Array* array2, Array* array3);

#endif // !ARRAY