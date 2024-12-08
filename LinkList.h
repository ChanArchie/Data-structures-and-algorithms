//
// Created by Administrator on 24-12-3.
//

#ifndef LINKLIST_H
#include "ListNode.h"
template <typename DataType> class LinkList {
public:
    LinkList();
    LinkList(ListNode<DataType> *node);
    ~LinkList();
    bool insertNode(DataType newData);
    bool removeNode(ListNode<DataType> *q);
    ListNode<DataType>* findNode(DataType value);
    bool cleanLink();
    DataType getNodeData(ListNode<DataType> *p);
private:
    ListNode<DataType> *head;
};


#define LINKLIST_H
#endif //LINKLIST_H
