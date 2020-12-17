// Author: johnathan song
// GitHub:
// December 11, 2020
// csis 123a

#ifndef LINKLIST_H
#define LINKLIST_H

#include <string>
// TODO: this does not belong outside of main stated on various feedback.
using namespace std;

struct Node {
    // TODO: void type is not valid, variables shoudl be lower case
    void * Data;
    Node *Next;
};

class LinkList {
public:
    LinkList();
    // TODO: void type is not valid
    void addItem(void * data);
    void listItems(void print(void *));
private:
    Node * Head;
};

#endif /* LINKLIST_H */

