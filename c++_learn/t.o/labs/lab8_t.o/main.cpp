#include "impl.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>


using namespace std;
pthread_mutex_t mutex;
LinkedList lista;
void* function(void* args){
    pthread_mutex_lock(&mutex);
    int cod = *(int*)args;
    switch(cod){
        case 1:{
            //thread 1 
            cout << "---------ELIMINAR---------"<<endl;
            for(int i = 0; i< 10; ++i){
                int random = randomNumber(1,10);
                bool confirm = lista.deleteByIndex(random);
                if(confirm){
                    cout << "Eliminando "<<random<<endl;
                }else{
                    cout << "No se elimino "<<random<<endl;
                }
            }
            cout << endl;           
        }
        break;
        case 2:{
            //thread 2
            cout << "---------INSERTANDO---------"<<endl;
            for(int i = 0; i < 10; ++i){
                int random = randomNumber(1,10);
                lista.insertToEnd(random);
                cout << "Insertando :"<<random << endl;
            }
            cout << endl;
        }
        break;
        case 3:{
            //thread 3

            cout << "---------BUSCANDO---------"<<endl;
            int random = randomNumber(1,10);
            lista.buscar(random);
            cout << endl; 
        }
        break;
        case 4:{
            //thread 4
            cout << "---------MODIFICANDO---------"<<endl;
            int ran1 = randomNumber(1, 10);
            Node* tmp = lista.getNode(ran1);
            if(tmp == nullptr){
                cout << "No se encontro"<<endl;
            }else{
                int N = tmp->data;
                int M = randomNumber(1,10);
                cout << "Modificando "<<N<<" a "<<M<<endl;
            }
            lista.display();
            cout << endl; 
        }
        break;
        default:
        cout << "Error de operacion no autorizada"<<endl;
    };
    pthread_mutex_unlock(&mutex);
    return nullptr;
}
int main(){
    pthread_t t1,t2,t3,t4;
    pthread_mutex_init(&mutex,NULL);
    int ct1 = 1;//eliminar valores 
    int ct2 = 2;
    int ct3 = 3;
    int ct4 = 4;
    lista.addNode(1);
    lista.addNode(3);
    lista.addNode(4);
    lista.addNode(5);    
    if(pthread_create(&t1,NULL,function,&ct1)!=0){
        cout << "No se pudo crear el thread "<<ct1<<endl;
        return 1;
    }
    if(pthread_create(&t2,NULL,function,&ct2)!=0){
        cout << "No se pudo crear el thread "<<ct2<<endl;
        return 2;
    }
    if(pthread_create(&t3,NULL,function,&ct3)!=0){
        cout << "No se pudo crear el thread "<<ct3<<endl;
        return 3;
    }
    if(pthread_create(&t4,NULL,function,&ct4)!=0){
        cout << "No se pudo crear el thread "<<ct4<<endl;
        return 4;
    }
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
    pthread_join(t4,NULL);

}