//main.cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include "Stack.h"

using namespace std;

int main() {
    string filename;
    cout << "Enter input file name: ";
    getline(cin, filename);

    // Open the input file
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Failed to open file: " << filename << endl;
        return 1;
    }

    Stack stack;
    string line;

    // Read the file line by line and push parsed data onto the stack
    while (getline(infile, line)) {
        stringstream ss(line); // Use to extract each variable from a long string
        string name, id, email;

        // Parse line in the format "name, id, email"
        if (getline(ss, name, ',') && getline(ss, id, ',') && getline(ss, email)) {
            // Lambda function to trim leading and trailing whitespace
            auto trim = [](string& s) {
                size_t start = s.find_first_not_of(" \t");
                size_t end = s.find_last_not_of(" \t");
                //If there are no meaningful characters in s, make s an empty string and exit.
                if (start == string::npos) { 
                    s = "";
                    return;
                }
                s = s.substr(start, end - start + 1);
            };

            trim(name);
            trim(id);
            trim(email);

            // Push the parsed data onto the stack
            stack.push(name, id, email);
        }
    }
    infile.close();

    // Pop nodes from the stack and print in reverse order with format: id, name, email
    while (!stack.isEmpty()) {
        Node* node = stack.pop();
        cout << node->id << ", " << node->name << ", " << node->email << "\n";
        delete node;  // Free dynamically allocated memory
    }

    return 0;
}
