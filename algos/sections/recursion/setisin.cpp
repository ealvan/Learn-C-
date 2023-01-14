#include <iostream>  
#include <set>  
  
using namespace std;  
  
int main(void) {  
   set<char> m = {'a', 'b', 'c', 'd'};  
  
              
    auto it = m.find('d');  
     
    if ( it == m.end() ) {  
    // not found  
     cout<<"Element not found";  
    }   
    else {  
        // found  
        cout << "Iterator points to " << *it<< endl;  
    }  
      
   return 0;  
}  