#include <iostream> //1

#include "Vehicle.h"



//void foo(const Vehicle &v) //ref/ l-value
//{
//    std::cout <<"foo "<<v.GetNumberOfSits() << "\n";
//    std::cout<<"R-value\n";
//}


//void foo(const Vehicle &a)// (L and R)-values
//{
//    std::cout<<" L-value\n";
//}

void foo(Vehicle a) //Copy (L and R)-values
{
    std::cout<<" Value\n";
}


int main()
{

    Vehicle moto{4, "green"};

    //move semantics
    //foo({2, "black"});
    //foo(moto);
    foo(std::move(moto));


    //moto.SetNumberOfSits(-2);

    //std::cout << moto.GetNumberOfSits() << "\n";

    //Vehicle moto2{moto};  //init

    //moto2 = moto; //assign

    //std::cout << moto2.GetNumberOfSits() << "\n";


/*
    int x = 10;
    int &y = x; //alias, ref, l-value
    y = 12;


    foo(13);

    //std::cout<<x<<"\n";
*/
    return 0;
}




