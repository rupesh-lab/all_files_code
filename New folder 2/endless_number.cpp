#include <iostream>
#include <vector>
using namespace std;
int main() {
    int input;
    vector<int> number;
    while(true){
        cin>>input;
        if(input == -1){
            break;
        }
        number.push_back(input);
    }
    number[number.size()]=number.size();
    cout<<number[number.size()]<<endl;
}
