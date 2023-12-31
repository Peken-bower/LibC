#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_node{
    int data;
    struct s_node *next;
}t_node;

typedef struct s_list t_list;
typedef struct s_list{
    t_node *head;
    t_node *tail;
    int size;

    t_list *(*CreateList)();
    void (*Insert)(t_list *list, int data);
    void (*InsertAt)(t_list *list, int data, int index);
    void (*RemoveAt)(t_list *list, int index);
    void (*RemoveData)(t_list *list, int data);
    void (*PrintList)(t_list *list);
    void (*ReverseList)(t_list *list);
    void (*DestroyList)(t_list *list);
    void (*DestroyNode)(t_node *node);
    void (*Sort)(t_list *list);
    void (*Swap)(t_node *a, t_node *b);
    void (*Max)(t_list *list);
    void (*Min)(t_list *list);
    void (*SUM)(t_list *list);
    void (*Search)(t_list *list, int data);
    void (*Update)(t_list *list, int data, int index);
    void (*InsertAfter)(t_list *list, int data, int index);
    void (*InsertBefore)(t_list *list, int data, int index);
    void (*RemoveFirst)(t_list *list);
    void (*RemoveLast)(t_list *list);
    void (*RemoveAll)(t_list *list);
    void (*RemoveAfter)(t_list *list, int index);
    void (*RemoveBefore)(t_list *list, int index);
    void (*RemoveAllData)(t_list *list, int data);
    void (*RemoveAllAfter)(t_list *list, int index);
    void (*RemoveAllBefore)(t_list *list, int index);
    void (*RemoveAllBetween)(t_list *list, int index1, int index2);
    void (*RemoveAllAfterData)(t_list *list, int data);
    void (*RemoveAllBeforeData)(t_list *list, int data);
    void (*RemoveAllBetweenData)(t_list *list, int data1, int data2);
    void (*RemoveAllAfterNode)(t_list *list, t_node *node);
    void (*RemoveAllBeforeNode)(t_list *list, t_node *node);
    void (*RemoveAllBetweenNode)(t_list *list, t_node *node1, t_node *node2);
    void (*split)(t_list *list, t_list *list1, t_list *list2);
    void (*merge)(t_list *list1, t_list *list2);
}t_list;

    t_list *L_create(int size);
    void L_Insert(t_list *list, int data);
    void L_InsertAt(t_list *list, int data, int index);
    void L_RemoveData(t_list *list, int data);
    void L_RemoveAt(t_list *list, int index);
    void L_PrintList(t_list *list);
    void L_ReverseList(t_list *list);
    void L_DestroyList(t_list *list);
    void L_DestroyNode(t_node *node);
    void L_Sort(t_list *list);
    void L_Swap(t_node *a, t_node *b);
    void L_Max(t_list *list);
    void L_Min(t_list *list);
    void L_SUM(t_list *list);
    void L_Search(t_list *list, int data);
    void L_Update(t_list *list, int data, int index);
    void L_InsertAfter(t_list *list, int data, int index);
    void L_InsertBefore(t_list *list, int data, int index);
    void L_RemoveFirst(t_list *list);
    void L_RemoveLast(t_list *list);
    void L_RemoveAll(t_list *list);
    void L_RemoveAfter(t_list *list, int index);
    void L_RemoveBefore(t_list *list, int index);
    void L_RemoveAllData(t_list *list, int data);
    void L_RemoveAllAfter(t_list *list, int index);
    void L_RemoveAllBefore(t_list *list, int index);
    void L_RemoveAllBetween(t_list *list, int index1, int index2);
    void L_RemoveAllAfterData(t_list *list, int data);
    void L_RemoveAllBeforeData(t_list *list, int data);
    void L_RemoveAllBetweenData(t_list *list, int data1, int data2);
    void L_RemoveAllAfterNode(t_list *list, t_node *node);
    void L_RemoveAllBeforeNode(t_list *list, t_node *node);
    void L_RemoveAllBetweenNode(t_list *list, t_node *node1, t_node *node2);
    void L_Split(t_list *list, t_list *list1, t_list *list2);
    void L_Merge(t_list *list1, t_list *list2);
L_
#endif