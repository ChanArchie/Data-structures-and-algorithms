//
// Created by Archie on 2025/10/19.
//

#include "LinkList.h"

#include <cstdio>
#include <cstdlib>

typedef int ElemType;
//def Linklist node type
typedef struct LNode{
    struct LNode *next;
    ElemType data;
}LNode,*LinkList;

//LNode*是结构指针，和LinkList完全等价
void headInsert(LinkList &L){
    L=(LinkList)malloc(sizeof(LNode));
    //申请头节点空间，头指针指向头节点
    L->next=NULL;
    int x;
    scanf("%d",&x);
    LNode *s;//用来指向申请的新节点
    while(x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;//新节点的下一个节点指向头节点的下一个节点
        L->next=s;//头节点指向新的节点
        scanf("%d",&x);
    }
}

void printList(LinkList L)
{
    while(L->next!=NULL)
    {
        L=L->next;
        printf("%d ",L->data);
    }
}

