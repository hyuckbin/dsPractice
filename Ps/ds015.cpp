#include<iostream>
#include<string>

using namespace std;

void ltrim(string &s){

    int first = s.find_first_not_of(" \t");
    if(first!= string :: npos){
        s = s.substr(first); //first 앞부분은 생략
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

void input(string& s1){
    getline(cin,s1);

    ltrim(s1);
    
    rtrim(s1);

}

int length(string &s){
    int size = s.find_last_not_of(" \t");
    int length = 0;
    if(size != string::npos){
        int i = s.size()-1;
        while(i>=0 && s[i] !=' ' && s[i] !='\t' ){
            i--;
            length ++ ; 
        }
    }
    return length;
}
int main(){
    string s1;

    input(s1);

    int size = length(s1);

    cout << s1;
    cout << endl << "길이: "<<size;

    // string s = "Hello world";
    // cout << s.size()<< endl;
    // cout << s.substr()<< endl;
    // cout << s.substr(2)<< endl;
    // cout << s.substr(2,6)<< endl;   // 2부터 6글자 -s> llo wo
    
    // cout << s.substr(0,3)<< endl;a
    return 0;
}