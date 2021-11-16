template<typename T>
class Node{
public:
    T data;
    Node<T>* next;
};
template<typename T>
class LinkedList{
    private:
        Node<T> *head,*fin;//para mantener el head
    public:
        LinkedList();//deafault constructor
        void addNode(const T& data);//agregar un right value
        Node<T>* getHead(){ return head;  }//para obtener la cabeza
        void display();//imprimer la lista
        void deleteAll();//borrar todo
        void deleteNodes(Node<T>* head);//
        
};