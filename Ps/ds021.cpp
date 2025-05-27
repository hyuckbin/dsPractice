#include <iostream>
using namespace std;

const int SIZE = 3;

class Student{
    private:
        double getAvg() const;

    public:
        string name;
        string sid;
        int *score;
        void print() const;
};

double Student::getAvg() const{
    int sum ;
    double avg;

    for(int i=0; i<SIZE; i++){
        
    }
}

void input(Student &s){
    cin >> s.sid;
    for(int i=0; i<SIZE; i++){
        cin >> s.score[i];
    }
    getline(cin,s.name);

}
int main(){
    Student s1;
    s1.score = new int[SIZE];
//sa
    input(s1);
}