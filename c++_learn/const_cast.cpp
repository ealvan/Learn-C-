#include <iostream>
using namespace std;
class Object{
    public:
        string name;
        double price;
        Object(){}
        void displayMembers(){
            cout << name << endl;
            cout << price << endl;
        }
};
class ObjInheritance:public Object{
    public:
        static void displayAllData(const Object& obj){
            //obj.displayMembers();//error:attemp to invoke a NON COSNT FUNCTION
            Object obj_const = const_cast<Object&>(obj);
            obj_const.displayMembers();
        }
};
int main(){
    ObjInheritance obj;
    obj.name = "Hello friend";
    obj.price = 12.1212;
    ObjInheritance::displayAllData(obj);
}