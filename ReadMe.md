# Data Structures and Algorithms And C programming language
this repository is a collection of data structures and algorithms implemented in c this lib will be used as a reference for me and for anyone who wants to learn data structures and algorithms. the reference of this lib is multiple books and websites. i will mention the references in the end of this file.
im still working on this lib and i will add more data structures and algorithms in the future. i choiced the c programming language because it's a low level language and it's very close to the machine language. also it's a very powerful language and it's used in many fields like embedded systems, operating systems, compilers, etc. also it's a very fast language and it's used in many high performance applications. also because i know that every programmer should start from the c programming language . so you can't use this lib if you don't know the c programming language. this lib is built for learning purposes only. so if you want to use it in your project you can do it but i don't recommend it because it's not optimized for production. also i will not accept any pull request that will optimize the code for production. so if you want to optimize the code for production you can fork the repo and do it in your forked repo.

## Data Structures
the term of data strcture is a way to organize data in a computer so that it can be used effectively.
we have alot of data structures like: arrays, linked lists, stacks, queues, trees, graphs, etc.
but in general we have two types of data structures: 
1. linear data structures: in this type of data structures the data items are arranged in a linear sequence.
2. non-linear data structures: in this type of data structures the data items are not in sequence.

### Linear Data Structures

the linear data structures means that the data items are arranged in a linear sequence. for example: arrays, linked lists, stacks and queues.
the linear data structures can be represented in two ways:
1. sequential representation: in this representation the data items are stored in a sequential manner.
2. linked representation: in this representation the data items are linked using pointers.

#### Arrays
the array is a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.
in some languages like C/C++, we can find the array as a primitive data type. but in python we can find the array as a list. also the javascript the array can have different types of data.

##### Array Operations
1. Traverse: print all the array elements one by one.
2. Insertion: adds an element at the given index.
3. Deletion: deletes an element at the given index.
4. Search: searches an element using the given index or by the value.
5. Update: updates an element at the given index.
6. Sorting: sort the array in ascending order.
7. Merging: merge two arrays into one array.
8. Reversing: reverse the array.
9. Maximum: find the maximum element in an array.
10. Minimum: find the minimum element in an array.
11. Summation: find the sum of all array elements.
12. Splitting: split the array into two arrays.
13. Cycling: rotate the array by n elements.


#### Linked Lists

the linked list is a linear data structure where each element is a separate object. each element of a list is comprising of two items: the data and a reference to the next node. the last node has a reference to null. the entry point into a linked list is called the head of the list. it should be noted that head is not a separate node, but the reference to the first node. if the list is empty then the head is a null reference.

##### Linked List Operations
1. Traverse: print all the linked list elements one by one.
2. Insertion: adds an element at the given index.
3. Deletion: deletes an element at the given index.
4. Search: searches an element using the given index or by the value.
5. Update: updates an element at the given index.
6. Sorting: sort the linked list in ascending order.
7. Merging: merge two linked lists into one linked list.
8. Reversing: reverse the linked list.
9. Maximum: find the maximum element in a linked list.
10. Minimum: find the minimum element in a linked list.
11. Summation: find the sum of all linked list elements.
12. Splitting: split the linked list into two linked lists.
13. Cycling: rotate the linked list by n elements.

#### Stacks

the stack is a linear data structure which follows a particular order in which the operations are performed. the order may be LIFO(Last In First Out) or FILO(First In Last Out). there are many real-life examples of a stack. consider an example of plates stacked over one another in the canteen. the plate which is at the top is the first one to be removed, i.e. the plate which has been placed at the bottommost position remains in the stack for the longest period of time. so, it can be simply seen to follow LIFO(Last In First Out)/FILO(First In Last Out) order.

##### Stack Operations
1. Traverse: print all the stack elements one by one.
2. Push: adds an element at the top of the stack.
3. Pop: removes an element from the top of the stack.
4. Peek: get the top element of the stack.
5. Search: searches an element using the given index or by the value.
6. Update: updates an element at the given index.
7. Sorting: sort the stack in ascending order.
8. Merging: merge two stacks into one stack.
9. Reversing: reverse the stack.
10. Maximum: find the maximum element in a stack.
11. Minimum: find the minimum element in a stack.
12. Summation: find the sum of all stack elements.
13. Splitting: split the stack into two stacks.
14. Cycling: rotate the stack by n elements.

#### Queues

the queue is a linear data structure which follows a particular order in which the operations are performed. the order is First In First Out(FIFO). a good example of a queue is any queue of consumers for a resource where the consumer that came first is served first. the difference between stacks and queues is in removing. in a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

##### Queue Operations
1. Traverse: print all the queue elements one by one.
2. Enqueue: adds an element at the end of the queue.
3. Dequeue: removes an element from the front of the queue.
4. Peek: get the front element of the queue.
5. Search: searches an element using the given index or by the value.
6. Update: updates an element at the given index.
7. Sorting: sort the queue in ascending order.
8. Merging: merge two queues into one queue.
9. Reversing: reverse the queue.
10. Maximum: find the maximum element in a queue.
11. Minimum: find the minimum element in a queue.
12. Summation: find the sum of all queue elements.
13. Splitting: split the queue into two queues.
14. Cycling: rotate the queue by n elements.
