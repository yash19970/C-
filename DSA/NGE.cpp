#include<iostream>
#include <stack>
using namespace std;
 
void printNextGreaterElement(int input[], int inputSize) {
    stack<int> s;
    s.push(input[0]);
    for (int i = 1; i < inputSize; i++) {
        while (!s.empty() && s.top() < input[i]) {
            cout<<"Next greater element for "<<s.top()<<"\t = "<<input[i]<<"\n";
            s.pop();
        }
        s.push(input[i]);
    }
    while (!s.empty()) {
        int top = (int) s.top();
        s.pop();
        cout<<"Next greater element for "<<top<<"\t = null\n";
    }
}
 
int main() {
   
    int input[] = {10, 3, 12, 4, 2, 9, 13, 0, 8, 11, 1, 7, 5, 6 };
    printNextGreaterElement(input, 7);
    return 0;
}
