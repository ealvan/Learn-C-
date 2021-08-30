#include <iostream>
using namespace std;
       union Employee
       {
              int Id;//4 bytes
              char Name[3];//3bytes
              int Age;//4 bytes
              long Salary;//8 bytes
              //Total share memory place = 8 bytes
              //8 is more bigger than them.
       };
       int main()
       {
              Employee E;

                cout << "\nEnter Employee Id : ";
                cin >> E.Id;

                cout << "\nEnter Employee Name : ";
                cin >> E.Name;

                cout << "\nEnter Employee Age : ";
                cin >> E.Age;

                cout << "\nEnter Employee Salary : ";
                cin >> E.Salary;

                cout << "\n\nEmployee Id : " << E.Id;
                cout << "\nEmployee Name : " << E.Name;
                cout << "\nEmployee Age : " << E.Age;
                cout << "\nEmployee Salary : " << E.Salary<<endl;
            cout <<sizeof(long)<<endl;

       }