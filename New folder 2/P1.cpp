#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> result = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // for(const auto& a: result){
    //     for(const auto& b: a ){
    //         cout<<b<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
