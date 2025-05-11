#include <iostream>

using namespace std;
int BoxVolume(int n1 , int n2 , int n3){
    return n1*n2*n3;
}
int BoxVolume(int n1 , int n2){
    return n1*n2*1;
}
int BoxVolume(int n1){
    return n1*1*1;
}

int BoxVolume(){
   return -1;
}
int main(){
    cout <<"[3,3,3]"<<BoxVolume(3,3,3)<<endl;
    cout <<"[5,5,D]"<<BoxVolume(5,5)<<endl;
    cout <<"[7,D,D]"<<BoxVolume(7)<<endl;
    cout <<"[D,D,D]"<<BoxVolume()<<endl;
    return 0;
}