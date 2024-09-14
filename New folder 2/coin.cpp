#include <iostream>
using namespace std;
void count(int num, int value){
    if(num==0){
        cout<<"Number: "<<value<<endl;
        return;
    }
    else if(num>=10){
        value=value+(num/10);
        num=num%10;
        count(num, value);
    }
    else if(num>=5){
        value=value+(num/5);
        num=num%5;
        count(num, value);
    }
    else if(num>=2){
        value=value+(num/2);
        num=num%2;
        count(num, value);
    }
    else{
        value=value+(num/1);
        num=num%1;
        count(num, value);
    }
    
    
}
int main(){
    int num;
    cin>>num;
    int value=0;
    count(num, value);
    // cout<<value<<endl;
}