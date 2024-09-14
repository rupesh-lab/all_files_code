#include <iostream>
using namespace std;

void print(float amount,int Nstock,float Cstock, int have){
    cout << "Cost of company: " << amount << endl;
    cout << "Number of Stocks: " << Nstock << endl;
    cout << "Cost of 1 Stock: " << Cstock << endl;   
    cout << "Number of Stocks Owned: " << have <<endl;
}

void purchase(float& amount, int& Nstock, float& Cstock, int num) {
    amount += (num * Cstock);   
    Nstock -= num;      
    Cstock = amount / Nstock;    
}
void sell(float& amount, int& Nstock, float& Cstock, int num){
    amount -= (num * Cstock); 
    Nstock += num;
    Cstock = amount / Nstock; 
}

void again(float& amount, int& Nstock, float& Cstock, int& have) {
    char buy;
    cout << "Do you want to buy/sell ? (b/s): ";
    cin >> buy;
    
    if (buy == 'b' || buy == 'B') {
        cout << "How many stocks do you want to buy? ";
        int num; 
        cin >> num;
        if (num > Nstock) {
            cout << "Not enough stocks available." << endl;
        } else {
            have=have+num;
            purchase(amount, Nstock, Cstock, num);
        }
    } else if (buy == 's' || buy == 'S') {
        cout << "How many stocks do you want to sell? ";
        int num; 
        cin >> num;
        if (num > have) {
            cout << "Not enough stocks to sell." << endl;
        } else {
            have=have-num;
            sell(amount, Nstock, Cstock, num); 
        }
        
    } else {
        cout << "Invalid input." << endl;
    }
}

void call(float amount,int Nstock,float Cstock,int have){
    again(amount, Nstock, Cstock, have);
    print(amount, Nstock, Cstock, have);
    call(amount, Nstock, Cstock, have);
}

int main() {
    float amount;
    int Nstock;
    int have=0;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter number of stocks: ";
    cin >> Nstock;
    float Cstock = amount / Nstock;
    cout << "Cost of 1 stock: " << Cstock << endl;
    call(amount, Nstock, Cstock, have);
    return 0;
}
