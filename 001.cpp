//두 수 사이의 정수 합 코드
#include <iostream>

using namespace std;

int main() {
    cout << "숫자 2개를 입력해";
    int num1 , num2 ;
    int sum =0;
    cin >> num1 >> num2 ;

    if(num1 < num2 ){
    for(int i= num1+1 ; i<num2 ; i++){
        sum += i;
    }

}
    else {
        for(int i= num2+1 ; i<num1 ; i++){
        sum += i;
    }
    }

    cout <<endl << sum;
}