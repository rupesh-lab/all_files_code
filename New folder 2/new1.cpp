#include<iostream>
using namespace std;
int main(){
    int num=5;


    int a=num;
    cout<<" a before"<<num<<endl;
    a++;
    cout<<"a after"<<num<<endl;
    cout<<" "<<endl;
    int *p=&num;
    cout<<"before pointer: "<<num<<endl;
    (*p)++;
    cout<<"pointer after:"<<num<<endl;

    int *q=p;
    cout<<p<<" " <<q<<endl;
    cout<<*p<<" "<<*q<<endl;
}