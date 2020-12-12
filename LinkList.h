// Author: johnathan song
// GitHub:
// December 11, 2020
// csis 123a

#ifndef LINKLIST_H
#define LINKLIST_H

#include <string>
using namespace std;

struct Node {
    void * Data;
    Node *Next;
};

class LinkList {
public:
    LinkList();
    void addItem(void * data);
    void listItems(void print(void *));
private:
    Node * Head;
};

#endif /* LINKLIST_H */

