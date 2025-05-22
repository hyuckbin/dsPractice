#ifndef STACK_H
#define STACK_H

#include <string>
using namespace std;

// Node structure to store individual records
// Each node holds an id, name, email, and a pointer to the next node
struct Node {
    string id;           // Student ID
    string name;         // Student name
    string email;        // Student email
    Node* next;          // Pointer to the next node in the stack

    // Constructor to initialize a node with given data
    Node(string name, string id, string email);
};

// Stack class implemented using a singly linked list
class Stack {
private:
    Node* topNode;  // Pointer to the top of the stack

public:
    Stack();        // Constructor to initialize an empty stack
    ~Stack();       // Destructor to free all allocated nodes

    // Push a new node with given name, id, and email onto the stack
    void push(const string& name, const string& id, const string& email);

    // Check if the stack is empty
    bool isEmpty();

    // Pop the top node from the stack and return it
    Node* pop();
};

#endif
