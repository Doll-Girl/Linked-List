#include <iostream>
#include <memory>

template <class T> class LinkedList {
    // Insert first
    // insert after
    // reserve
    // remove
    // size
    // print
    // remove duplicates
    // Merge
    // Sort

  public:
    void printList() {
        std::cout << "Print List:" << std::endl;
        std::cout << "[" << size() << "]:";
        Node *current = head;
        while (current != nullptr) {
            std::cout << "{" << current->data << "}->";
            current = current->next;
        }
        std::cout << std::endl;
    }

    T *insertFirst(T data) { return nullptr; }
    T *insertAfter(T *after, T data) { return nullptr; }
    T *traverse();
    void remove(T data);
    int size() { return 0; }
    void removeDuplicates();
    void sort();

  private:
    class Node {
      public:
        std::shared_ptr<T> data;
        Node *next;
    };
    Node *head;
};
/*
template <class T> void LinkedList<T>::insertFirst(T data){

}

template <class T> void LinkedList<T>::insertAfter(T* after, T data){

}

template <class T> void LinkedList<T>::printList(){
    std::cout << "Print List:" << std::endl;
}*/