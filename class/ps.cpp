#include <iostream>
using namespace std;

//노드 class
class Node{
    public :
        int data;
        Node* next;
        Node(int value) : data(value),next(nullptr){}
};

//stack class
class LLStack{
    Node *top;

    public:
        LLStack() : top(nullptr) {}
        ~LLStack() {clear();}
        void push(int value){
            //값 설정 ->새 노드 생성
            Node *newnode = new Node(value);
            //새 노드의 next에 top 대입 ->top에 새 노드 주소
            newnode->next = top;
            top = newnode;

        }
        int pop(){
            Node *temp = top;
            int val = temp -> data;
            top = temp -> next;
            delete temp;
            return val;
        }
        int peek(){
            if(isEmpty()) return -1;

            return top->data;
        }

        bool isEmpty(){
            return  (top==nullptr);
        }
        void printAll(){
            Node *curr = top;
            while(true){
                cout << curr->data << "--->";
                curr = curr->next;

                if(curr == nullptr) break;
            }

            cout << "Nullpte"<< endl;
        }
        void clear(){
            while(top) pop();
        }
};


int main(){
    LLStack stack;

    stack.push(100);
    stack.push(90);
    stack.push(80);
    stack.push(70);
    stack.push(60);

    stack.pop();
    stack.pop();

    stack.printAll();
    stack.clear();

    
    stack.push(70);
    stack.push(60);
    stack.printAll();
    return 0;
}