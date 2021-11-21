#include <iostream>
#include "def.h"
using std::cout;
using std::endl;

template<typename T>
LinkedList<T>::LinkedList(){
    head = nullptr;
    fin = nullptr;
}
template<typename T>
void LinkedList<T>::addNode(const T& data){
    Node<T>* tmp = new Node<T>;
    tmp->data = data;
    tmp->next = nullptr;

    if(head == nullptr){
        head = tmp;
        fin = tmp;
    }else{
        fin->next = tmp;
        fin = fin->next;
    }
}
template<typename T>
void LinkedList<T>::display(){
    Node<T>* ptr = head;
    while(ptr != nullptr){
        cout << ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<"NULL" << endl;
}
template<typename T>
void LinkedList<T>::deleteAll(){
    if(head != nullptr){
        deleteNodes(head);
    }
}
template<typename T>
void LinkedList<T>::deleteNodes(Node<T>* ptr){
    if(ptr->next != nullptr){
        deleteNodes(ptr->next);
    }
    delete(ptr);
}
template<typename T>
void LinkedList<T>::insertToInit(const T& data){
    Node<T>* node = new Node<T>;
    node->data = data;
    Node<T>* ptr = head;
    node->next = ptr;
    head = node;
}
int main(){
    LinkedList<int> lista;
    lista.addNode(1);
    lista.addNode(3);
    lista.addNode(4);
    lista.addNode(5);
    lista.display();
    lista.deleteAll();
    LinkedList<std::string>list1;
    list1.addNode("Juan");
    list1.addNode("George");
    list1.addNode("pepe");
    list1.addNode("jambie");
    list1.display();
    list1.insertToInit("Pedro");
    list1.display();
    list1.deleteAll();
}
