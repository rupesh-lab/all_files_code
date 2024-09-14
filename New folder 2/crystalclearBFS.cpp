// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void print(queue<int> q){
    queue<int> temp=q;
    cout<<"ELements in q: ";
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
    return;
}
void BFS(int start, vector<vector<int>>& adjList,vector<bool>& visited){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int node=q.front();
        print(q);
        cout<<"Popped Element: "<<q.front()<<endl;
        cout<<endl;
        q.pop();
        for(int neighbor: adjList[node]){
            cout<<"Neighbor of "<<node<<" is: "<<neighbor<<endl;
            if(!visited[neighbor]){
                cout<<neighbor<<" is unvisited."<<endl;
                visited[neighbor]=true;
                q.push(neighbor);
            }
            cout<<endl;
        }
    }
}
int main(){
    int n=5;
    vector<vector<int>> adjList(n);
    vector<bool> visited(n, false);
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0};
    adjList[3] = {1};
    adjList[4] = {1};
    BFS(0, adjList, visited);
    return 0;

}