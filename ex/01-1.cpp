//구구단 출력
#include <iostream>
using namespace std;

int main(){
    int select ;
    cout << "몇단 출력? " <<endl;
    cin >>select;

    cout<< select<<"단 -----------"<<endl;

    for(int i=1 ; i<10; i++){
        cout<< i*select <<endl;
    }

    return 0;
}

