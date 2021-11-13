template<typename T>
class Node{
public:
    T data;
    Node<T>* next;
};
template<typename T>
class LinkedList{
    private:
        Node<T> *head,*fin;
    public:
        LinkedList();
        void addNode(const T& data);
        Node<T>* getHead(){ return head;  }
        void display();
        void deleteAll();
        void deleteNodes(Node<T>* head);
        
};