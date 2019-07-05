#include <typeinfo>
#include <iostream>
using namespace std; 

template<typename T>
void funcT(const T& param){
    cout << "type: "<<(string)typeid(param).name() <<endl;
}
int main5(){
    int x = 0;

    funcT(x);

 
    string astr = "asd";

    funcT(astr);

    cout << "type: "<<(string)typeid(const int).name() <<endl;
    cout << "type: "<<(string)typeid(int).name() <<endl;

	return 0;
}