#include <iostream>
#include <string>
//prefix 구하기를 해보장

using namespace std;

string prefix(string *s1 , string *s2){
     int i = 0;
     //이렇게 하는이유 다시 생각해봐라 (*s1)[i]a11aaaa
    while (i < s1->size() && i < s2->size() && (*s1)[i] == (*s2)[i]) {
        i++;
    }
    return s1->substr(0,i) ;
}
int main(){
    int size;
    cin >> size;
    string *str = new string[size] ;
    
    for(int i=0; i<size; i++){
        cin >> str[i] ;
    }
    
    string same = str[0];

    for(int i = 1 ; i < size; i ++){
         same = prefix(&same,&str[i]);
    }

    if(same.empty()){
        cout << "XXXXXXXXXXXXX";
        return 0;
    }

    cout << same;
    return 0;
}