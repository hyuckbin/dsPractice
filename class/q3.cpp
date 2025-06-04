#include <iostream>
using namespace std;
//q 연습
class CQ{
    int front , rear;
    int maxSize;
    int *list;

    public:
        CQ(int size) : front(0),rear(0),maxSize(size+1){
            list = new int[maxSize]
        }
        ~CQ(){
            delete[] list;
        }
        bool isEmpty(){
            return front == rear;
        }
        bool isFull(){
            return (rear+1) % maxSize == front; 
        }
        void enqueue(int val){
            if(isFull()) return;

            list[front] = val;
            front = (front +1) &maxSize;
        }
        int dequeue(){
            if(isEmpty()) return
        }
        void print();
        void clear();
};
int main(){

    return 0;
}