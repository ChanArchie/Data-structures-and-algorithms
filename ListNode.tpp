#include "ListNode.h"

#include <bits/ranges_base.h>
#include <bits/range_access.h>
//
// Created by Administrator on 24-12-8.
//

template<typename DataType>
ListNode<DataType>::ListNode(DataType data, ListNode<DataType> *nextNode) {
    this->data = data;
    this->next = nextNode;
}

template<typename DataType>
ListNode<DataType> ListNode<DataType>::getNext() {
    return this->next;
}

template<typename DataType>
DataType ListNode<DataType>::getData() {
    return data;
}
