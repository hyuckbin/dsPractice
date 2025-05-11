#include <iostream>

using namespace std;

namespace B1{
    void SimpleFunc(void);
}
namespace P1{
    void SimpleFunc(void);
}

int main(){
    B1::SimpleFunc();
    P1::SimpleFunc();

}

void B1::SimpleFunc(){
    cout << "B1의 함수 "<<endl;

}

void P1::SimpleFunc(){
    cout << "P1의 함수 "<<endl;

}