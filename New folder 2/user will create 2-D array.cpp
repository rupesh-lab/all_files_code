#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter number of rows: "<<n<<endl;
    cout<<"Enter number of columns: "<<m<<endl;
    
    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            cout<<" ";
        }
        cout<<" "<<endl;
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j];
        }
    }
}