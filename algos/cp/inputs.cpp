#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;

void forma1(){
    int a,b;
    string c;
    cin >> a >> b >> c;
    cout << a << b << c << endl;
}
void forma2(){
    std::ios::sync_with_stdio(0);
    cin.tie(0);
}
void forma3(){
    int a,b;
    std::scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
}
void lineForma4(){
    string s;
    getline(cin,s);//con todo y espacios   
}
void forma5(){
    int x;
    while( cin >> x){
        //code
    }
}

void forma6(){
    //para files de output y salida
    std::freopen("input.txt","r",stdin);
    std::freopen("output.txt","w",stdout);
}
int main(){


}