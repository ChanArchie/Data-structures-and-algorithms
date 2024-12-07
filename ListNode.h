//
// Created by Administrator on 24-12-7.
//

#ifndef LISTNODE_H

#include <stddef.h>
#include "LinkList.h"
template <typename DataType>class ListNode {
    public:
    ListNode();
    ListNode(DataType data,ListNode<DataType> *nextNode=NULL);
    ~ListNode();
    DataType getData();
    ListNode getNext();
    private:
    friend typename LinkList<DataType>;
    DataType data;
    DataType *next;
};
#define LISTNODE_H
#endif //LISTNODE_H
