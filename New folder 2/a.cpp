#include <iostream>
#include <stack>
using namespace std;

void printC(stack<int> C) {
    stack<int> temp;  // Temporary stack to hold the elements

    while (!C.empty()) {
        temp.push(C.top());
        C.pop();
    }
    cout << "Stack elements of C are: " ;
    while (!temp.empty()) {
        int element = temp.top();
        cout << element << " ";  // Display the element
        C.push(element);  // Push the element back to the original stack
        temp.pop();
    }

    cout << endl;
}


void printB(stack<int> B) {
    stack<int> temp;  // Temporary stack to hold the elements

    while (!B.empty()) {
        temp.push(B.top());
        B.pop();
    }
    cout << "Stack elements of B are: " ;
    while (!temp.empty()) {
        int element = temp.top();
        cout << element << " ";  // Display the element
        B.push(element);  // Push the element back to the original stack
        temp.pop();
    }

    cout << endl;
}



void printA(stack<int> A) {
    stack<int> temp;  // Temporary stack to hold the elements

    while (!A.empty()) {
        temp.push(A.top());
        A.pop();
    }
    cout << "Stack elements of A are: " ;
    while (!temp.empty()) {
        int element = temp.top();
        cout << element << " ";  // Display the element
        A.push(element);  // Push the element back to the original stack
        temp.pop();
    }

    cout << endl;
}

void check(stack<int> C, int move, int x){
    if(C.size()==x && C.top()==1){
        cout<<"Win."<<endl;
        cout<<"You have completed in "<<move<<" moves."<<endl;
        return;
    }
    else{
        
    }
}

void edit(stack<int>& s,stack<int>& s2){
        if(s2.empty() || s.top()<s2.top()){
            s2.push(s.top());
            s.pop();       
        }
        else{
            cout<<"Enter valid input."<<endl;
        }
}

void col(stack<int>& A,stack<int>& B,stack<int>& C, int& move, int& x) {
    check(C,move,x);
    move++;
    string a;
    cout << "Enter: ";
    cin >> a;

    if (a == "AB"){
        edit(A,B);
    }
    else if (a == "BA") {
        edit(B,A);
    } 
    else if (a == "AC") {
        edit(A,C);
    } 
    else if (a == "CA") {
        edit(C,A);
    } 
    else if (a == "BC") {
        edit(B,C);
    } 
    else if (a == "CB") {
        edit(C,B);
    } 

    else{
        cout<<"Enter valid input."<<endl;
    }

    if (!A.empty()) {
        printA(A);
    }
    if (!B.empty()) {
        printB(B);
    }
    if (!C.empty()) {
        printC(C);
    }
    col(A, B, C, move, x);
}

int main() {
    stack<int> A;
    stack<int> B;
    stack<int> C;    
    int move=0;
    cout<<"You have to transfer the elements of stack A in stack B"<<endl;
    cout<<"How many elements to continue: "<<endl;
    int x;
    cin>>x;
    for(int i=0; i<x; i++){
        A.push(x-i);
    }
    cout<<"Press AC or AB"<<endl;
    col(A, B, C, move, x);
}
