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
void list_head_insert(LinkList &L){
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

void list_tail_insert(LNode* &L)
{
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    ElemType x;
    scanf("%d",&x);
    LNode *s,*r=L;
    while(x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));
        s->data =x;
        r->next=s;//新结点给尾节点的next指针
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
}

void print_list(LinkList L)
{
    while(L->next!=NULL)
    {
        L=L->next;
        printf("%d ",L->data);
    }
}

