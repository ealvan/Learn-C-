#include <iostream>
using namespace std;

class MonsterDB{
    private:
        ~MonsterDB(){};
    public:
        static void myDestructor(MonsterDB* mdb){
            delete mdb;//invoke private destructor
        }
        void doSomething(){
            cout << "Do something!"<<endl;
        }
};

int main(){
    //heap memory give a huge memory for assign as a programmer
    //randomly and no in stacj memory
    //it's more big than MonsterDB
    MonsterDB* mydb = new MonsterDB();//heap memory not stack memory
    mydb->doSomething();
    //delete with my own constructor
    MonsterDB::myDestructor(mydb);
    return 0;
}