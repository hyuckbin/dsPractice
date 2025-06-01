#include<iostream>
#include<string>

using namespace std;

void ltrim(string &s){

    int first = s.find_first_not_of(" \t");
    if(first!= string :: npos){
        s = s.substr(first); //first 앞부분은 생략ㅁ
    }
    else{
        cout << "";
    }
}


void rtrim(string &s){
    int last = s.find_last_not_of(" \t");
    if(last != string :: npos){
        s= s.substr(0,last+1);
    }    
    else{
        cout <<"";
    }
}

void input(){
    string s1;

    getline(cin,s1);

    ltrim(s1);
    
    rtrim(s1);

    cout << s1;
}
int main(){

    input();
    return 0;
}