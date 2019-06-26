// C++ program to demonstrate working of 
// functors. 
#include <bits/stdc++.h> 
using namespace std; 
// A Functor 
class divisible 
{ 
private: 
    int num;
public: 
    divisible(int n) : num(n) {  } 
  
    // This operator overloading enables calling 
    // operator function () on objects of increment 
    int operator () (int d) const { 
        return d % num == 0;
    } 
}; 

int main(){
    divisible divBy3(3);
    divisible divBy2(2);
    cout << divBy3(3)<<endl;
    cout << divBy3(5)<<endl;

    return 0;
}