//when a object lose data when 
//you can assign derived class to base class
#include <iostream>
using namespace std;
class Pet{
    public:
        string name;
};
class Dog:public Pet{
    public:
        string breed;
};
int main(){
    Dog dog;
    Pet pet;
    dog.name = "Froggy";
    dog.breed = "Kangal Dog";
    pet = dog;
    ///error : cout << pet.breed<< endl; //slice breed of dogs
    cout << pet.name << endl;
    //Fix SLICING problems!!
    Dog* dog1 = new Dog();
    Pet* pet1;
    dog1->name = "Lilian";
    dog1->breed = "kangal Hungary";
    pet1 = dog1;
    cout << ((Dog*)pet1)->breed << endl;

}