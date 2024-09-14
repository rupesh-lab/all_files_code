// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void hello(vector<int> &num){
    for(int i=0; i<num.size(); i++){
        num[i]=num[i]*num[i];
    }
    cout<<"BY Simple: "<<endl;
    for(int i=0; i<num.size(); i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return;
}
int main() {
    vector<int> num={1,2,3,4,5};
    hello(num);
    cout<<"BY AUTO: "<<endl;
    for(const auto& a: num){
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<"Done";
}