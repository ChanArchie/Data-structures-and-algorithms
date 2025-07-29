//
// Created by Administrator on 25-7-29.
//

#include "List.h"
#include <iostream>
#include <cstdio>
using namespace std;


void InitList(SqList &L){
  L.data = new ElemType[L.MaxLength];
  L.length = 0;
  L.MaxLength = LIST_INIT_LEN;
};

void DestroyList(SqList L){
  free(L.data);
  L.data = NULL;
  L.length = 0;
  L.MaxLength = 0;
};

int Length(SqList &L){
  return L.length;
};

bool Empty(SqList &L){
  if(L.length == 0)
    return true;
  else
    return false;
};

void PrintList(SqList &L){
  for(int i = 0; i < L.length; i++){
    cout<<"List["<<i<<"]:"<<L.data[i]<<endl;
  }

};

void ListDelete(SqList &L, int i){
   for(i=i-1;i<L.length-1;i++){
     L.data[i] = L.data[i+1];
   }
   L.data[L.length-1] = NULL;
   L.length--;
};

ElemType LocateElem(SqList &L, ElemType i){
  for(int j = 0; j < L.length; j++){
    if(L.data[j] == i)
      return j;
  }
};

ElemType GetElem(SqList &L, int i){
  return L.data[i];
};
