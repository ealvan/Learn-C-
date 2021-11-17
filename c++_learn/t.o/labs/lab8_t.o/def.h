
class Node{
public:
    int data;
    Node* next;
};

class LinkedList{
    private:
        Node *head,*fin;//para mantener el head
        int size;
    public:
        LinkedList();//deafault constructor
        void addNode(const int& data);//agregar un right value
        Node* getHead(){ return head;  }//para obtener la cabeza
        void display();//imprimer la lista
        void deleteAll();//borrar todo
        void deleteNodes(Node* head);//
        int getSize(){
            return size;
        }
        bool deleteByIndex(int index);
        Node* getNode(int index);
        void insertToEnd(int data);
        void buscar(int dato);
};