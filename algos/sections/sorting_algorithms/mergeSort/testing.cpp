//testing.cpp
#include "mergeSortModel.h"
#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
// #define N 100;

// template<typename Iterator>
// void print(Iterator list){
//     for(auto item: list){
//         cout << item << " ";
//     }
//     cout << endl;
// }
template<typename Iterator>
string toStr(Iterator list){
    string str="";
    for(auto item: list){
        str += to_string(item)+" ";
    }
    cout <<"\n|"<<str<<"|\n";
    return str;
}
template<size_t M>
bool test_arrays(array<int,M> a, array<int,M> b){
    if(a.size() != b.size()) 
        return false;

    for(int i = 0; i < a.size(); ++i){
        if(!(a[i] == b[i])) 
            return false;
    }
    return true;
}
class Test : public CPPUNIT_NS::TestCase
{
  CPPUNIT_TEST_SUITE(Test);
  CPPUNIT_TEST(testMergeSort);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp(void) {}
  void tearDown(void) {} 

protected:
    void testMergeSort(void){
        const size_t n = 73;
        array<int,n> tosort;
        array<int,n> tosort_test;

        for(int i = 0; i < n; i++){
            tosort[i] = rand()%100;
            tosort_test[i] = tosort[i];
        }
        toStr(tosort);
        toStr(tosort_test);
        // copy(tosort.begin(), tosort.end(), tosort_test);
        sort(tosort.begin(),tosort.end());
        array<int,n> sorted = mergeSortByMyself<tosort_test.size()>(tosort_test);
        cout << "------------RESULTS--------------\n";
        toStr(tosort);
        toStr(sorted);
        CPPUNIT_ASSERT(test_arrays<n>(tosort,sorted));

        // print(tosort);
        // print(sorted);
    }
};


CPPUNIT_TEST_SUITE_REGISTRATION(Test);

int main( int ac, char **av )
{
    srand(time(0));
 
    CPPUNIT_NS::TestResult controller;

    CPPUNIT_NS::TestResultCollector result;
    controller.addListener( &result );        

    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener( &progress );      

    CPPUNIT_NS::TestRunner runner;
    runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    runner.run( controller );

    return result.wasSuccessful() ? 0 : 1;
}