#include <iostream>
#include <string.h>
using namespace std;

class BussinesMan{
    private:
        int lenJobs;
        string name;
        string *jobs;
    public:
        BussinesMan(string name,int lenJobs, string jobs1[])
                    :name(name),lenJobs(lenJobs){

            this->jobs = new string[lenJobs];
            int i =0;
            for(i =0; i < lenJobs; i++){
                *(jobs+i) = jobs1[i];
            }
            cout << "OriginConstructor) Point to "<<hex << (unsigned int*)jobs<<endl;
            // int j =0;
            // for(string* ptr= jobs1; ptr <= &jobs1[lenJobs-1]; ptr++){
            //     *(jobs+j) = *ptr;
            //     j++;
            // }
        }
        BussinesMan(const BussinesMan& sourceCopy){
            jobs = NULL;
            if(sourceCopy.jobs != NULL){
                char* buff = new char[this->name.length()+1];
                strcpy(buff, sourceCopy.name.c_str());
                jobs = sourceCopy.jobs;
                name =  string(buff);
                lenJobs = sourceCopy.lenJobs;
                cout << "CopyConstructor) Point to "<<hex<<(unsigned int*)jobs<<endl;
            }
        }
        string getName(){
            return this->name;
        }
        int getLenJobs(){
            return this->lenJobs;
        }
        string* getJobs(){
            return jobs;
        }
};
void sayHello(BussinesMan ed){
    cout << "Info about "<< ed.getName()<<":"<<endl;
    cout << "Jobs:"<<endl;
    string *jobs = ed.getJobs();
    for(int j = 0; j < ed.getLenJobs(); j++){
        cout << "-> " <<*(jobs+j) <<"."<< endl;
    }
}
int main(){
    string jobs[] = {"Entrepeneur","Lawyer","Software Engineer"};
    BussinesMan ed("Ed",3,jobs);
    sayHello(ed);
}