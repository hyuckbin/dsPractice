#include <iostream>

void MyFunc(void){
    std::cout <<"MyFunc(void) called" <<std::endl;
}

int MyFunc(char c){
    std::cout <<"MyFunc(char c) called" <<std::endl;
}
void MyFunc(int a, int b){
    std::cout <<"MyFunc(int a, int b) called" <<std::endl;
}
int main () {
    MyFunc();
    MyFunc('A');
    MyFunc(12,113);

    return 0;
}