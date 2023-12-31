#include "../inc/List.h"

t_list *create(int size)
{
    t_list *list = (t_list *)malloc(sizeof(t_list));
    list->size = size;
    list->head = NULL;
    list->tail = NULL;
    list->create = L_create;
    list->Insert = L_Insert;
    list->InsertAt = L_InsertAt;
    list->RemoveAt = L_RemoveAt;
    list->RemoveData = L_RemoveData;
    list->PrintList = L_PrintList;
    list->ReverseList = L_ReverseList;
    list->DestroyList = L_DestroyList;
    list->Sort = L_Sort;
    list->Sort = L_Sort;
    list->Swap = L_Swap;
    list->Max = L_Max;
    list->Min = L_Min;
    list->SUM = L_SUM;
    list->Search = L_Search;
    list->Update = L_Update;
    list->InsertAfter = L_InsertAfter;
    list->InsertBefore = L_InsertBefore;
    list->RemoveFirst = L_RemoveFirst;
    list->RemoveLast = L_RemoveLast;
    list->RemoveAll = L_RemoveAll;
    list->RemoveAfter = L_RemoveAfter;
    list->RemoveBefore = L_RemoveBefore;
    list->RemoveAllData = L_RemoveAllData;
    list->RemoveAllAfter = L_RemoveAllAfter;
    list->RemoveAllBefore = L_RemoveAllBefore;
    list->RemoveAllBetween = L_RemoveAllBetween;
    list->RemoveAllBeforeData = L_RemoveAllBeforeData;
    list->RemoveAllAfterData = L_RemoveAllAfterData;
    list->RemoveAllBetweenData = L_RemoveAllBetweenData;
    list->RemoveAllBetweenIndex = L_RemoveAllBetweenIndex;
    list->Merge = L_Merge;
    list->Split = L_Split;


    

    return list;
}