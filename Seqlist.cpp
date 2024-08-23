

#include "Seqlist.h"
/*****順序表数据结构*****/
/***順序表的定義 構造函數***/
template <typename DataType>
Seqlist<DataType>::Seqlist(int size)
{
  if(size>0)//检查赋予的顺序表大小，如果合法则分配相应大小的内存
    {
        maxSize = size;
        elements = new DataType[maxSize];//分配内存大小
      }
}

/***析構函數***/
template <typename DataType>
Seqlist<DataType>::~Seqlist()
{
  delete[] elements;
}

/***順序表的插入操作***/
template <typename DataType>bool Seqlist<DataType>::inserElement(DataType data)
{
    int currentIndex = length ;  //記錄新元素的插入位置
    if(length >= maxSize)
    {
        return false;           //順序表已滿，返回false，插入不成功
    }
    else
    {
        elements[currentIndex] =data ; //將新元素插入順序表表尾
        length++;                   //順序表有效長度+1
        return true;
    }
}

/***順序表的刪除操作***/
template <typename Datatype>
bool Seqlist<Datatype>::deleteElement(int location)
{
    if(location >= length || location < 0)
    {
        return false;
    }
    else
    {
        for (int i = location; i < length ; i++) {
            elements[i]=elements[i+1];
        }
        length--;
        return true;
    }
}

/***獲取指定位置的元素***/
template <typename Datatype>
Datatype Seqlist<Datatype>::getElement(int location)
{
    if (location< 0 || location>length)
    {
        std::cout<<"參數無效"<<std::endl;
        return 0;
    }
    else
    {
        return elements[location];
    }
}

/***修改指定位置的元素值***/
template<typename DataType>
bool Seqlist<DataType>::changeElement(int location, DataType newData)
{
    if(location<0||location>=length)
    {
        return false;
    }
    else
    {
        elements[location]= newData;
        return true;
    }
}

