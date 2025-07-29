//
// Created by Administrator on 25-7-29.
//

#ifndef LIST_H
#define LIST_H
#define LIST_INIT_LEN 10
#define ElemType int
#include "stdbool.h"

typedef struct {
  ElemType *data;//存储基地址
  int length;//当前长度
  int MaxLength;//最大长度
}SqList;

void InitList(SqList &L);
void DestroyList(SqList &L);
int Length(SqList &L);
bool Empty();
void PrintList(SqList &L);
void ListDelete(SqList &L, int i);
ElemType LocateElem(SqList &L, ElemType i);
ElemType GetElem(SqList &L, int i);



#endif //LIST_H
