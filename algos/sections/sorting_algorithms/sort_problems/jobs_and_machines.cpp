#include <bits/stdc++.h>
using namespace std;
/*
BYNARY_SEARCH appplied
There are:
k: jobs
n: machines.

Each machine i, has a constant time processing of a job "pi";
Find the minimum time to process all the jobs "k".
*/
template<size_t N>
bool valid(int time, const array<int,N>& pis, int jobs,int min_time){    
    int total_jobs = 0;
    for(int i = 0; i < pis.size(); ++i){
        total_jobs += (time/pis[i]);
    }
    // cout <<" total_jobs: "<<total_jobs<<" time: "<<time<<" jobs: "<<jobs<< " Result: "<<boolalpha<<(total_jobs>=jobs)<<" min_time: "<<min_time<<endl;
    return total_jobs >= jobs;
}

template<size_t N>
void find_mintime(int nromachines, int jobs, const array<int,N> &pis){
    int z = jobs*pis[0];
    int min_time = -1;
    //for each loop, I will reduce b to b/2; This will reduce the time in each time by half.
    for(int b = z; b >= 1; b /= 2){
        //Meanwhile, I will check it that time(min_time+b) is possible to do all the "jobs".
        while( !valid(min_time + b,pis, jobs,min_time) ) 
            //what happens is it not valid?
                //we just say with security that (min_time+=b) is not doing all the jobs.
            min_time+=b;
                //So we can add another "b" time, in the next loop, to see if it's valid.
                //is it's valid, It doesnt make sense to add it. Because could be another "b" time
                //that do all the jobs, this b times, always will do less than the "b" variable in before loop.
            //But what happens if b is so little that valid(min_time+b) is false again?
                //Well, I just said with security that (min_time+b) don't do all the jobs proposed.
                //So I will chekit again, if I add another "b"(with the same value) to see if that time do all the jobs.
                //If it's valid
        //It's an algorithm which divide the "+b" operator, if with (min_time+b), don't do all the jobs.
        //I will stay sum up(+b) to the min_time. Until (meantime+b) do all the jobs.
        //Then with the first loop I will try to split that b in b/2. 
        //To get a little (+b) that plush "min_time" do all the jobs. 
        //But at the end, I try to don't do all the jobs, with the second loop. Because the second loop says:
            //"I want to sum a secure (+b) to the meantime, which don't fullfill all the jobs."
            //"Because, in that way, I will be very secure that I don't have the correct time. "
            //"However I am very close of it."
        //The first loop says:
            //"I want to reduce (+b) each by his half. I have inside an algorithm that check if with that time."
            //"It's not possible to do all the jobs. So my job is reduce as much as possible(>=1) that "+b" variable.
            //"In such way, the second algirthm check if that time fullfill all the jobs".
    }
    int time = min_time+1;
    cout << "The minimum time is: "<< time << endl;
}

int main(){
    const int n = 3;
    int k = 8;
    array<int,n> pis = {2,3,7};
    find_mintime(n,k,pis);
}