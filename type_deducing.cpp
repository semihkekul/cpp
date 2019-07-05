#include <typeinfo>
#include <iostream>
using namespace std;

template<typename T>
void funcT(T param){
    cout << "type: "<<typeid(param).name() <<" value:"<< param<<endl;
	param = 222;
}

template<typename R>
void funcR(R& param) {
	cout << "type: " << typeid(param).name() << " value:" << param << endl;
	param = 333;
}


int main(){
    int i = 75;
    
    int& ri = i;
	
	funcT(ri);
	cout << i << " " << ri << endl;

	funcR(ri);
	cout << i << " " << ri << endl;
	
    return 0;
}