#include <iostream>
#include <stack>
using namespace std;

// Function to print the elements of a stack
void printStack(stack<int> s, const string& label) {
    stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    cout << "Stack elements of " << label << " are: ";
    while (!temp.empty()) {
        int element = temp.top();
        cout << element << " ";
        s.push(element);
        temp.pop();
    }
    cout << endl;
}

// Function to check if the game is won
bool checkWin(stack<int>& C, int move, int x) {
    if (C.size() == x && C.top() == 1) {
        cout << "Win!" << endl;
        cout << "You have completed the game in " << move << " moves." << endl;
        return true;
    }
    return false;
}

// Function to move the top element from one stack to another
void moveDisk(stack<int>& source, stack<int>& destination) {
    if (source.empty()) {
        cout << "Source stack is empty. Enter a valid move." << endl;
        return;
    }

    if (destination.empty() || source.top() < destination.top()) {
        destination.push(source.top());
        source.pop();
    } else {
        cout << "Invalid move. You can't place a larger disk on a smaller one." << endl;
    }
}

// Function to handle user input and control the game
void playGame(stack<int>& A, stack<int>& B, stack<int>& C, int& move, int x) {
    while (true) {
        if (checkWin(C, move, x)) {
            break;
        }

        move++;
        string command;
        cout << "Enter your move (e.g., AB to move from A to B): ";
        cin >> command;

        if (command == "AB") {
            moveDisk(A, B);
        } else if (command == "BA") {
            moveDisk(B, A);
        } else if (command == "AC") {
            moveDisk(A, C);
        } else if (command == "CA") {
            moveDisk(C, A);
        } else if (command == "BC") {
            moveDisk(B, C);
        } else if (command == "CB") {
            moveDisk(C, B);
        } else {
            cout << "Invalid input. Please enter a valid move." << endl;
            move--;
        }

        printStack(A, "A");
        printStack(B, "B");
        printStack(C, "C");
    }
}

int main() {
    stack<int> A;
    stack<int> B;
    stack<int> C;
    int move = 0;

    cout << "Welcome to the Tower of Hanoi game!" << endl;
    cout << "Your goal is to move all the disks from stack A to stack C." << endl;
    cout << "You can only move one disk at a time, and a larger disk cannot be placed on a smaller one." << endl;

    int x;
    cout << "Enter the number of disks to start the game: ";
    cin >> x;

    for (int i = x; i > 0; i--) {
        A.push(i);
    }

    cout << "Start moving the disks by entering commands like 'AB' to move from A to B." << endl;

    playGame(A, B, C, move, x);

    return 0;
}

