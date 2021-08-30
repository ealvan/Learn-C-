#include <iostream>
#include <string>
using namespace std;

class President{
    private:
        string name;
        President(){};
        President(const President&);
        const President& operator=(const President&);
    public:
        static President& getInstance(){
            static President uniquePresident;
            return uniquePresident;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
};
int main(){
    President& unique = President::getInstance();
    unique.setName("Abraham Lincon");
    cout << "There is a only unique president, and he is : "<< unique.getName()<<endl;
    unique.setName("George Roosevelt");
    cout << "Change de the name of my president: "<<
    President::getInstance().getName()<<endl;

    //Cannot Initializa other president.
    // President second;
    // //I dont permit my constructor outside of my class
    // President* other = new President();
    // //I dont permit copy constructor
    // President copy = unique;
    //I have only reference
    President* reference = &unique;
    cout << "I have only instance: " << reference->getName()<<endl;
}




