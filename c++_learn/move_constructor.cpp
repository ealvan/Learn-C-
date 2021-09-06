#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
    private:
        char* buffer;

        MyString(): buffer(NULL) // private default constructor
        {
            cout << "Default constructor called" << endl;
        }
   
    public:
        MyString(const char* initialInput) // constructor
        {
            cout << "Constructor called f" << initialInput << endl;
            if(initialInput != NULL)
            {
                buffer = new char [strlen(initialInput) + 1];
                strcpy(buffer, initialInput);
            }
            else
                buffer = NULL;
        }

        MyString(MyString&& moveSrc) // move constructor
        {
            cout << "Move constructor mov" << moveSrc.buffer << endl;
            if(moveSrc.buffer != NULL)
            {
                buffer = moveSrc.buffer; // take ownership i.e. 'move'
                moveSrc.buffer = NULL; // free move source
            }
        }
    
        MyString& operator= (MyString&& moveSrc) // move assignment op.
        {
            cout << "Move assignment operator. mov" << moveSrc.buffer << endl;
            if((moveSrc.buffer != NULL) && (this != &moveSrc))
            {
                delete[] buffer; // release own buffer

                buffer = moveSrc.buffer; // take ownership i.e. 'move'
                moveSrc.buffer = NULL; // free move source
            }

            return *this;
        }
        
        MyString(const MyString& copySrc) // copy constructor
        {
            cout << "Copy constructor copi" << copySrc.buffer << endl;
            if (copySrc.buffer != NULL)
            {
                buffer = new char[strlen(copySrc.buffer) + 1];
                strcpy(buffer, copySrc.buffer);
            }
            else
                buffer = NULL;
        }
       
        MyString& operator= (const MyString& copySrc) // Copy assignment op.
        {
            cout << "Copy assignment op. copi" << copySrc.buffer << endl;
            if ((this != &copySrc) && (copySrc.buffer != NULL))
            {
                if (buffer != NULL)
                    delete[] buffer;

                buffer = new char[strlen(copySrc.buffer) + 1];
                strcpy(buffer, copySrc.buffer);
            }

            return *this;
        }

        ~MyString() // destructor
        {
            if (buffer != NULL)
                delete[] buffer;
        }

        int GetLength()
        {
            return strlen(buffer);
        }
        
        operator const char*()
        {
            return buffer;
        }
        
        MyString operator+ (const MyString& addThis)
        {
            cout << "operator+ called: " << endl;
            MyString newStr;

            if (addThis.buffer != NULL)
            {
                newStr.buffer = new char[GetLength()+strlen(addThis.buffer)+1];
                strcpy(newStr.buffer, buffer);
                strcat(newStr.buffer, addThis.buffer);
            }

            return newStr;
        }
};

int main()
{
    MyString Hello("Hello ");
    MyString World("World");
    MyString CPP(" of C++");
    MyString sayHelloAgain ("overwrite this");
    sayHelloAgain = Hello + World + CPP;
    cout << sayHelloAgain<<endl;
    return 0;
}