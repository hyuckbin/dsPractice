#include <iostream>
#include <string>

using std :: string; // string 사용할 때 필요 (std :: 안붙이기위해)
using std :: cout; 
using std :: cin;  
using std :: endl; 
//구조체 
struct st_item{
    string itemName1  ; //상품이름 1
    string itemName2  ; //상품이름 2
    int price1 ; //상품 가격1
    int price2 ; //상품 가격2
    string constructor1 ; // 제조사1
    string constructor2; // 제조사2
};

void inputItem(st_item& s); //정보 입력
bool isCorrect(st_item& s); //일치하면 true 전달

//구조체 비교하기a
// 상품이름 비교할 때 대소문자 구분 1
// 상품이름과 가격이 같다면 EQUAL 출력1a
int main(){
    st_item item ;
    inputItem(item);
    
    cout<< item.itemName1 << item.price1 << item.constructor1 <<endl;
    cout<< item.itemName2 << item.price2 << item.constructor2 <<endl;
    if(isCorrect(item)){
        cout << item.itemName1<< " and " << item.itemName2 <<" is not equal." ;
    }
    return 0;
}

void inputItem(st_item& s){
    cout << "첫 번째 상품이름,가격,제조사를 입력하세요 : " << endl;
    cin >> s.itemName1 >> s.price1 >> s.constructor1 ;  
   
    cout << "두 번째 상품이름,가격,제조사를 입력하세요 : " << endl;
    cin >> s.itemName2 >> s.price2>> s.constructor2 ; 
}

bool isCorrect(st_item& s){
    if(s.itemName1 == s.itemName2){
        if(s.price1 == s.price2){
            return true;
        }
    }
    return false;
}