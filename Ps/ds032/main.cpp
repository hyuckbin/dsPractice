#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string line;
    string filename;
    getline(cin, filename); //데이터 파일 이름 입력

    ifstream file(filename);
    if(!file.is_open()){
        cerr<< "Failed to open!" << filename << endl;
        return 1;
    }

    while(getline(file,line)){
        stringstream ss(line);
        double gpa;
        string name;
        
        ss>>gpa>>name;

        cout << "GPA : " << gpa << ", Name: " << name <<endl;
        
    }

    file.close();

    return 0;
}