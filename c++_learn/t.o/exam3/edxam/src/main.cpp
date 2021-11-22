#include "imgDef.h"
//#include "pixelDef.h"

int main(){
    srand(time(NULL));
    // vector<vector<int>> matrix = (4,vector<int>(3,0));



    Img<int,Format::RGB> hola(3,4);
    hola.fill();
    hola.print();
    cout << "-----------------"<<endl;
    Img<int,Format::RGB> hey(3,4);
    hey.fill();
    hey.print();
    cout << "-----------------"<<endl;
    Img<int,Format::RGB> res = hola+hey;
    res.print();

    // Pixel<int,Format::RGB> p;
    // p.fill();
    // p.print();
    // Pixel<int,Format::RGB> p1;

    // Pixel<int,Format::RGB> p2 = p+p1;
    
    // p2.print();

    // p.setByIndex(0,255);
    // int inde = p.getIndex(0);
    // for(int i = 0; i < Format::RGB; ++i){
    //     cout << p[i]<<endl;
    // }
    // cout << inde << endl;
    
}