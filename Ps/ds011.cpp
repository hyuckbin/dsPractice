#include <iostream>

using std :: cin ;
using std :: cout ;
using std :: endl ;

//숫자들의 총합을 구한다.
int addNum(int count ,int* n){
    int sum = 0;
    for(int i=0; i<count ; i++){
        sum +=n[i];
    }

    return sum;
}
//최댓값을 구하는 함수
int MaxNum(int count ,int* n){
    int maxnum = 0;

    for(int i=0 ; i<count ; i++){
        if(maxnum < n[i]) maxnum = n[i];
    }
    return maxnum;
}

//입력한 수의 전체 합과 최댓값 구하기
int main(){
    int count; // 숫자 갯수
    int sumNum; // 총합
    int maxNum; //최댓값
    cout << "입력하고자 하는 숫자의 갯수를 입력하세요 " << endl;
    cin >> count;

    int* num = new int[count];
    
    for(int i=0 ; i< count ; i ++){
        cin >> num[i] ; 
    }

    sumNum = addNum(count , num);
    maxNum =MaxNum(count , num);

    cout << "총합: " << sumNum <<endl;
    cout << "최댓값: " << maxNum <<endl;
    delete[] num;

    return 0;
}