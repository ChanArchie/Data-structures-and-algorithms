//
// Created by Administrator on 24-12-3.
//

#include "LinkList.h"

#include <iostream>

#include "ListNode.h"
template<typename DataType>
LinkList<DataType>::LinkList() {
    head = new ListNode<DataType>();
}

template<typename DataType>
LinkList<DataType>::LinkList(ListNode<DataType> *node) {
    head =node;
}

template<typename DataType>
LinkList<DataType>::~LinkList() {
    delete head;
}

template<typename DataType>
bool LinkList<DataType>::insertNode(ListNode<DataType> *q, DataType newData) {
    ListNode<DataType> *p = head;
    ListNode<DataType> *node = new ListNode<DataType>(newData);
    if(node==NULL) {
        return false;
    }
    while(p->next!=NULL) {
        p=p->next;
    }
    p->next=node;
    return true;
}

template<typename DataType>
bool LinkList<DataType>::removeNode(ListNode<DataType> *q) {
    if(q==NULL) {
        std::cout<<"node to be deleted not existed"<<std::endl;
        return false;
    }
    ListNode<DataType> *tempPointer = head;
    while(tempPointer->next!=q) {
            tempPointer=tempPointer->next;
        }
        tempPointer->next=q->next;
        delete q;
        return true;
}



