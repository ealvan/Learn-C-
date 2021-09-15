#include <iostream>
using namespace std;
class Base{
    public:
        void baseMethod(){
            cout << "Base Method" << endl;
        }
};
class Derived: public Base{
    public:
        void derivedMethod(){
            cout << "Derived Method" << endl;
        }
};
int main(){
    //static_cast: only check if two objects are relationed
    //if there aren't any relashionship, no cast objects!
    //UPCASTING Derive Object -> Base Object
        //Implicit
        Derived der;
        Base* obj = &der;//OK!
        //Explicit
        Derived der1;
        Base* obj1 = static_cast<Base*>(&der1);
    //DOWNCASTING Base Object -> Derived Object
        //Implicit Downcasting NO WORKS:
        //Base bobj1;
        //Derived* deri2 = &bobj1;//No Ok :8!
        //Explicit works!
        Base bobj;
        Derived* der2= static_cast<Derived*>(&bobj);
        //Now, "der2" point a partial derived object, because
        //Only static_cast works in compile time.
        //You can compile this code, but when you execute
        //code like der2->derivedMethod(), result in unexpected behavior 
        
    //Is good for you make casting explicit and for other people:
    const double PI = 22/7.0;
    int trunc = static_cast<int>(PI);//make implicit is good for reading
    //You don't need this
    trunc = PI;//is the other way and has the same result,
    // but it's implicit CAST
    cout << PI << " "<< trunc << endl;
}