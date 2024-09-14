#include <iostream>
using namespace std;
void n(int& a,int& b){
    a=a+b;
    b=a-b;
}
int main() {
    int a=5;
    int b=3;
    cout<<"Sum : "<<a+b<<endl;
    n(a,b);
    cout<<a<<" "<<b<<endl;
}
