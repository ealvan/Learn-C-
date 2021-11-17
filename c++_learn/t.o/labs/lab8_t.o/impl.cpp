#include <iostream>
#include "def.h"
using std::cout;
using std::endl;
int randomNumber(int min, int max){
   return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}
LinkedList::LinkedList(){
    head = nullptr;
    fin = nullptr;
    size=0;
}
void LinkedList::addNode(const int& data){
    Node* tmp = new Node;
    tmp->data = data;
    tmp->next = nullptr;

    if(head == nullptr){
        head = tmp;
        fin = tmp;
    }else{
        fin->next = tmp;
        fin = fin->next;
    }
    size++;
}
void LinkedList::display(){
    Node* ptr = head;
    while(ptr != nullptr){
        cout << ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<"NULL" << endl;
}
void LinkedList::deleteAll(){
    if(head != nullptr){
        deleteNodes(head);
    }
    size = 0;
}
void LinkedList::deleteNodes(Node* ptr){
    if(ptr->next != nullptr){
        deleteNodes(ptr->next);
    }
    delete(ptr);
}
bool LinkedList::deleteByIndex(int index){
    bool a = true;
    if(head != nullptr){
        if(index == 0){
            Node* tmp = head;
            head = head->next;
            tmp->next=nullptr;
            delete tmp;
        }else if(index < size && index > -1){
            Node* ptr = head;
            int i = 0;
            //3-> 2/ 0 1
            while(ptr != nullptr && i < index-1){
                i++;
                ptr = ptr->next;
            }
            Node* myTmp = ptr->next;
            ptr->next = myTmp->next;
            myTmp->next = nullptr;
            delete myTmp;
        }
        size--;
        return a;
    }
    a = false;
    return a;
}
Node* LinkedList::getNode(int index){
    if(head == nullptr){
        return nullptr;
    }else{
        Node* ptr = head;
        int i = 0;
        while(i < index && ptr->next != nullptr){
            i++;
            ptr = ptr->next;
        }
        if(i == index){
            return ptr;
        }else{
            return nullptr;
        }
    }
}
void LinkedList::insertToEnd(int data){
    Node* tmp = new Node;
    tmp->data = data;
    tmp->next = nullptr;

    if(head == nullptr){
        head = tmp;
    }else{
        Node* ptr = head;
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = tmp;
    }
    size++;
}
void LinkedList::buscar(int dato) {
    Node* temp = head;
    int cont = 1;
    int cont2 = 0;
    while (temp) {
        if (temp->data == dato) {
            cout << "Buscado: " << dato << endl;
            cont2++;
        }
        temp = temp->next;
        cont++;
    }
    if (cont2 == 0) {
        cout << "No encontrado: " << dato << endl;
    }
    //cout << endl << endl;
}