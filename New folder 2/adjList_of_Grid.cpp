#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int rows , cols , value = 1;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>cols;
    vector<vector<int>> grid(rows, vector<int>(cols, 0));
    unordered_map<int, vector<int>> adjList; // Adjacency list representation

    // Filling the grid with values
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            grid[i][j] = value++;
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<grid[i][j] <<" ";
        }
        cout<<endl;
    }
            
    // Creating adjacency list
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            int current = grid[i][j];
            // Check for all possible neighbors and add them to the adjacency list
            if(i > 0) adjList[current].push_back(grid[i-1][j]); // Top
            if(i < rows - 1) adjList[current].push_back(grid[i+1][j]); // Bottom
            if(j > 0) adjList[current].push_back(grid[i][j-1]); // Left
            if(j < cols - 1) adjList[current].push_back(grid[i][j+1]); // Right
        }
    }

    // Print adjacency list
    for(const auto& pair : adjList) {
        cout << "Neighbors of " << pair.first << ": ";
        for(int neighbor : pair.second)
            cout << neighbor << " ";
        cout << endl;
    }

    return 0;
}


