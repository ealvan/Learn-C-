#include <string>
#include <iostream>
#include <cmath>
#include <map>
#include <cstring>
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::map;

void greather_repetitions(string &dna){
    map<char, int> adn = {
        {'A',0},
        {'C',0},
        {'G',0},
        {'T',0},
    };
    for(char d: dna){
        switch(d){
            case 'A':
                adn['A']++;
                break;
            case 'C':
                adn['C']++;
                break;
            case 'G':
                adn['G']++;
                break;
            case 'T':
                adn['T']++;
                break;
            default:
                return;   
        }
    }
    int mayor = -1;
    for(std::pair<char,int> item: adn){
        if(mayor < item.second){
            mayor = item.second;
        }
    }
    cout << mayor;
}
void long_subsequent(string& dna){
    int i =0;
    int max_len = 1;
    while(i < dna.length()){
        if(dna[i] == dna[i+1]){
            int k = i;
            while(i<dna.length() && dna[i] == dna[i+1]){
                i++;
            }
            int len = i -k +1;
            max_len = std::max(max_len, len);
        }else{
            i++;
        }
    }
    cout << max_len;

}
int main(){
    string dna;
    getline(cin, dna);
    long_subsequent(dna);
    //greather_repetitions(dna);
}

