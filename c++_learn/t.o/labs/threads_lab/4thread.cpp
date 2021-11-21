#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <iostream>

using namespace std;
pthread_mutex_t mutex;

void* function(void* args){
    pthread_mutex_lock(&mutex);
    int cod = *(int*)args;
    switch(cod){
        case 1:{
            //thread 1            
        }
        break;
        case 2:{
            //thread 2
        }
        break;
        case 3:{
            //thread 3
        }
        break;
        case 4:{
            //thread 4
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
    
    pthread_create(&t1,NULL,function,&ct1);
    pthread_create(&t2,NULL,function,&ct2);
    pthread_create(&t3,NULL,function,&ct3);
    pthread_create(&t4,NULL,function,&ct4);
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
    pthread_join(t4,NULL);

}