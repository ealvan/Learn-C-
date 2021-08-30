#include <iostream>
using namespace std;
class Human
{
private:
 void Talk (string Statement)
 {
cout << Statement;
 }
public:
 void IntroduceSelf()
 {
Talk("Bla bla"); // same as Talk(this, "Bla Bla")
 }
};