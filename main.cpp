#include "linked_list.h"

int main(){
    LinkedList<int> * list = new LinkedList<int>();
    list->printList();

    list->insertFirst(1);
}