

#include "Seqlist.h"
/***********************线性表数据结构******************************************/

template <typename DataType>
Seqlist<DataType>::Seqlist(int size)
{
  if(size>0)//检查赋予的顺序表大小，如果合法则分配相应大小的内存
    {
        maxSize = size;
        elements = new DataType[maxSize];//分配内存大小
      }
}
template <typename DataType>
Seqlist<DataType>::~Seqlist()
{
  delete[] elements;
}