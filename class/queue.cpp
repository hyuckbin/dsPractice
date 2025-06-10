#include <iostream>
using namespace std;
//deque
//circular 연습
class CQ{
    int front , rear;
    int maxSize;
    int* list;

    public:
        CQ(int size): front(0) , rear(0) , maxSize(size+1) {
            list = new int[maxSize];
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
            
            list[rear] = val;
            rear = (rear+1) % maxSize;
        }
        int dequeue(){
            if(isEmpty()) return -1;

            int val = list[front];
            front = (front + 1) %maxSize;
            return val;
        }
        void clear(){
            front = rear = 0 ;
        }
        void print(){
            if(isEmpty()) return;
            int i = front;

            while(true){
                cout << list[i] << " - > ";
                i = (i+1) % maxSize;
                
                if(i == rear) break;
            }

            cout <<endl;
        }
        int frontItem();
        int rearItem();
        
};



int main(){
    CQ q(5);

    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);

    q.print();

    q.dequeue();
    q.dequeue();

    q.print();

    q.enqueue(10);

    q.print();

    return 0;
}