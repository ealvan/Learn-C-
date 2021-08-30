//pointers
#include <iostream>
using namespace std;
class Human
{
 // Member attributes:
 string name;
 string dateOfBirth;
 string placeOfBirth;
 string gender;
 unsigned short int age;
 // Member functions:
 public:
    //listing initalization
    Human(string name, int age):name(name), age(age){
        cout << "Listing initalization "<<
        "\n Name: "<<name<<
        "\nAge: "<<age<<endl;
    }
    // default initialization
    // Human(string name="Anonymous", int age=0){
    //     this->name = name;
    //     this->age = age;
    // }
    //Combine last two initialization
    Human(string name="Anonymous", unsigned short int age=-1):name(name),age(age){
        cout << "Listing initalization"<<
        "\n Name: "<<name<<
        "\nAge: "<<age<<endl;

    }
    void Talk(string textToTalk){
        cout << textToTalk << endl;
    }
    void IntroduceSelf(){
        cout << "Hello. I am a student of software engineer."<<endl;
        cout << "I am "<< age <<" years old and my name is "<< name <<endl;
    }
    ~Human();
};
Human::~Human(){

} 
int main(){
    Human* man = new Human();
    (*man).IntroduceSelf();
    man->Talk("Hello guys!!");
    delete man;
}