#include <iostream>
using namespace std;
//qq2
class Qu{
    int front , rear;
    int maxSize;
    int* list;
    
    //method.
    public:
        Qu(int size): front(0) , rear(0), maxSize(size +1) {
            list = new int[maxSize];
        }
        ~Qu(){
            delete[] list;
        }
        void enqueue(int val){
            if(isFull()) return;

            list[rear] = val;
            rear = (rear+1) %maxSize;
        }
        int dequeue(){
            if(isEmpty()) return -1;
            
            int val = list[front];
            front = (front +1) % maxSize;
            return val;
        }
        bool isEmpty(){
            return front == rear;
        }
        bool isFull(){
            return (rear+1) % maxSize == front;
        }
        void clear(){
            front = rear =0;
        }
        void print(){
            if(isEmpty()) return;
            int i = front;
            while (true){
                cout << list[i] << "=>>";
                i = (i+1) %maxSize;

                if(i == rear) break;
            }
            cout<<endl;
        }
};

int main(){
    Qu q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print();

    q.dequeue();

    q.print();
    return 0;
}