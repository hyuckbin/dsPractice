#include <iostream>
using namespace std;

class Node{
    public :
        int data;
        Node* next;
        Node(int value) : data(value),next(nullptr){};
};

class LLStack2{ 
    Node* top;

    public:
        LLStack2(): top(nullptr){}
        ~LLStack2(){clear();}
        void push(int value){
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
        }
        int pop(){
            if(isEmpty()) return -1;

            Node* pn = top;
            int pVal = top -> data; // 리턴할 pop 데이터 저장
            
            top = pn ->next; // 맨위의 데이터를 한 칸 내린다.

            delete pn; // 기존 top 삭제

            return pVal;
        }
        int peek(){
            return top->data;
        }
        bool isEmpty(){
            return top == nullptr;
        }
        void clear(){
            while(top) pop();
        }
        void printAll(){
            Node* curr = top;
            while(true){
                cout << curr->data << "->";
                curr = curr->next;

                if(curr ==nullptr) break;
            }
            cout <<"NULL"<<endl;
        }
};

int main(){
    LLStack2 stack;
    stack.push(100);
     stack.push(10);
    stack.push(20);
    stack.push(50); 
    stack.push(60);

    stack.printAll();

    stack.pop();
    stack.pop();

    stack.printAll();

    int peek = stack.peek();

    cout <<"peek = "<<peek<<endl;

    stack.clear();

    stack.push(100);

    stack.printAll();
    return 0;
}