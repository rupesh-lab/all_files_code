// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void hello(vector<int> &num){
    for(int i=0; i<num.size(); i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return;
}
int main() {
    vector<int> num={1,2,3,4};
    hello(num);
    cout<<"Done";
}