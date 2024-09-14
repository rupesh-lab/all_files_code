#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<"Address of "<<num<<" is: "<<&num<<endl;
    int * ptr=&num;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
