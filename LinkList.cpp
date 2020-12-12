// Author: johnathan song
// GitHub:
// December 11, 2020
// csis 123a


#include "LinkList.h"

LinkList::LinkList() {    
    Head = new Node;
    Head->Next = NULL;
}

void LinkList::addItem(void* data) {
    Node *p = Head;
    while (p->Next != NULL)
        p = p->Next;
    p->Next = new Node;    
    p = p->Next;
    p->Data = data;
    p->Next = NULL;
}

void LinkList::listItems(void func(void *)){
    Node *p = Head;
    while (p->Next != NULL){
        p = p->Next;
        func(p->Data);
    }
        
}

