#include <bits/stdc++.h>

using namespace std;

int main(){
    //make efficient output and input
    ios::sync_with_stdio(0);
    cin.tie(0);
    //----------------------------------------------------------------
    //set the output in a file
    FILE* hola2 = freopen("output.txt","w",stdout);
    FILE* hola = freopen("input.txt","r",stdin);
    // ---------------------------------------------------------------
    cout << hola2<<"HELLOW****"<<endl;

    // int a,b;
    // string x;
    // cin >> a >> b;
    // int m = scanf("%d %d",&a,&b);
    // cin >> x;
    // printf("%d %d-",a,b);
    // cout << x<<m<<"\n";
    //---------------------------------------------------------------
    //Get a entire line
    string s;
    getline(cin,s);
    cout << s<<endl;
    cout << hola << endl;
    //-----------------------------------------------
    //When the amount of data is unknown
    // char x;
    // while(cin >> x){
    //     cout << x << "\n";
    // }
    
}