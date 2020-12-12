// Author: johnathan song
// GitHub:
// December 11, 2020
// csis 123a


#include <cstdlib>
#include <string>
#include <iostream>

#include "LinkList.h"
using namespace std;

struct Item{
    string name;
    int price;
};


Item * getItem();


void printItem(void * data);


int main(int argc, char** argv) {
    
    LinkList items;
    char choice;
    string input;
    Item * item;
    do{
        cout << "A. Add Item" << endl;
        cout << "B. List Items" << endl;
        cout << "Q. Quit" << endl;
        cout << "Make selection: ";
        getline(cin, input);
        choice = input[0];
        
        switch(choice){
            case 'A':
                item = getItem();
                items.addItem((void *) item);
                break;
            case 'B':
                items.listItems(printItem);
                break;
        }
        cout << endl;
    }while(choice != 'Q');
    
    
    return 0;
}

Item * getItem(){
    string input;
    Item * item = new Item;
    cout << "Enter name: ";
  
    getline(cin, item->name);
    cout << "Enter price: ";
  
    getline(cin, input);
    item->price = atoi(input.c_str());
    return item;
}

void printItem(void * data){
    Item * item = (Item *) data;
    cout << (item->name) << " $" << (item->price) << endl;
}