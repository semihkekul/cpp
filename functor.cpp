// C++ program to demonstrate working of 
// functors. 
#include <iostream>
using namespace std; 
// A Functor 
class divisible 
{ 
private: 
    int num;
public: 
    divisible(int n) : num(n) {  } 
  
    int operator () (int d) const { 
        return d % num == 0;
    } 
}; 

int main2(){
    divisible divBy3(3);
    divisible divBy2(2);
    cout << divBy3(3)<<endl;
    cout << divBy3(5)<<endl;

    return 0;
}