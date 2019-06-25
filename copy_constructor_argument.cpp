#include <iostream>
using namespace std;
class cExample{
    int i;
public:
    cExample(int a):i(a){};
    
    cExample(cExample& rhs){
        cout << "copy"<<endl;
        i = rhs.i;
    }
    
};
void func(cExample& copiedArgument){

}

int main(){
    cExample cE(3);
    func(cE);
    return 0;
}