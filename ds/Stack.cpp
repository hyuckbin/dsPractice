#include "Stack.h"

using namespace std;

Node::Node(string name, string id,string email)
    : name(name), id(id), email(email), next(nullptr) {}

Stack::Stack() : topNode(nullptr) {}

Stack::~Stack() {
    while (topNode != nullptr) {
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }
}

void Stack::push(const std::string& name, const std::string& id, const std::string& email) {
    Node* newNode = new Node(name, id, email);
    newNode->next = topNode;
    topNode = newNode;
}

bool Stack::isEmpty() {
    return topNode == nullptr;
}

Node* Stack::pop() {
    if (isEmpty()) return nullptr;
    Node* temp = topNode;
    topNode = topNode->next;
    return temp;
}
