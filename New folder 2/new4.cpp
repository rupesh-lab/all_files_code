#include <iostream>
using namespace std;

void print(int arr[][100], int n, int m) { // specify the second dimension
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    
    int arr[100][100]; // assuming a maximum size for simplicity
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    string a;
    cout << "Want to display? (y/n): ";
    cin >> a;
    if(a == "y") {
        print(arr, n, m);
    }
    cout << "Done." << endl;
}
