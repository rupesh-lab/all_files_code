#include <iostream>
#include <random>
#include <string>
using namespace std;


void score(string player1,string player2,string player3, int a1, int b1 ,int c1){
    cout<<endl;
    cout<<player1<<" (point): "<<a1<<endl;
    cout<<player2<<" (point): "<<b1<<endl;
    cout<<player3<<" (point): "<<c1<<endl;
    cout<<endl;
    return;
}


void colour(string player1,string player2,string player3 ,int a1,int b1,int c1){
    // cout<<"Who want to host ?"<<endl;
    // string host;
    // cin>>host;
    // host=player3;
    // if(player3==)
    // player
    string word1,word2;
    cout << player1<<", enter your colour: ";
    cin>> word1;
    cout<<player2<<", enter your colour: ";
    cin>>word2;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1);
    int winner = dis(gen);
    int a;
    int b;
    cout<<player1<<" (point): ";
    cin>>a;
  
    cout<<player2<<" (point): ";
    cin>>b;
    cout<<endl;
    if(word1==word2){
        cout <<player3 <<" lose the colour: " << word1 <<endl;
        score(player1,player2,player3,a1+a,b1+b,c1-a-b);
        a1=a1+a;
        b1=b1+b;
        c1=c1-a-b;
        colour(player1,player2,player3,a1,b1,c1);
    }
    
    
    if (winner == 0) {
        cout <<player1 <<" wins the colour: " << word1 <<endl;
        score(player1,player2,player3,a1+a,b1-b,c1-a+b);
        a1=a1+a;
        b1=b1-b;
        c1=c1-a+b;
        colour(player1,player2,player3,a1,b1,c1);

        
    } else {
        cout << player2<<" wins the colour: " << word2 <<endl;
        score(player1,player2,player3,a1-a,b1+b,c1+a-b);
        a1=a1-a;
        b1=b1+b;
        c1=c1+a-b;
        colour(player1,player2,player3,a1,b1,c1);
        
    }
    return;
    
}

int main() {
    cout<<"Welcome to rang-chit game "<<endl;
    cout<<"There are 2 colour: Black and White"<<endl;
    string player1, player2, player3;
    cout<<"player 1 (Host): ";
    cin>>player3;
    cout<<"player 2: ";
    cin>>player1;
    cout<<"player 3: ";
    cin>>player2;
    cout<<endl;
    int n;
    cout<<"How many cards to distribute: "<<endl;
    cin>>n;
    int a1=n;
    int b1=n;
    int c1=n;
    colour(player1,player2,player3,a1,b1,c1);
    cout<<"Game Over";
}

