#include <iostream>

using namespace std;

struct Menu{
    string name;//메뉴이름
    int price; //가격
};
struct Cafe{
    string name; //식당이름
    int menuCount; //메뉴 개수
    Menu* list; //메뉴리스트s
};


void addCafe(Cafe &s){
    getline(cin,s.name);

    cin >> s.menuCount;

    s.list = new Menu[s.menuCount]; // 동적 배열 생성
}
void addMenu(Menu &menu){
    cin >> menu.name;
    cin >> menu.price;
}

void displayMenus(Cafe &cafe){
     cout << "=====HD Cafe ===== " << endl ;
    for (int i = 0; i < cafe.menuCount; ++i) {
         cout << cafe.list[i].name << " " << cafe.list[i].price << endl;
    }
    cout << "=========== " << endl ;
}
int main(){
    Cafe cafe ;
    addCafe(cafe);

    for(int i=0 ; i<cafe.menuCount; i++){
        addMenu(cafe.list[i]);
    }

    displayMenus(cafe);

    return 0;
}