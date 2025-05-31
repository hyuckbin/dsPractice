#include <iostream>

int val = 100; // 전역변수ㅁ

using std ::cout;
using std ::endl;

int main(){
    int val = 20 ;
    val += 3 ;
    ::val += 7 ;

    cout << val << endl<< ::val;

    return 0;
}