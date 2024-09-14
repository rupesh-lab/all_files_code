#include <iostream>
using namespace std;

void print(float amount,int Nstock,float Cstock){
    cout << "Cost of company: " << amount << endl;
    cout << "Number of Stocks: " << Nstock << endl;
    cout << "Cost of 1 Stock: " << Cstock << endl;   
}

// Function to handle the purchase of stocks
void purchase(float& amount, int& Nstock, float& Cstock, int num) {
    amount += (num * Cstock);    // Update the total amount
    Nstock -= num;               // Decrease the number of stocks
    Cstock = amount / Nstock;    // Recalculate the cost per stock
}

// Function to ask if the user wants to buy more stocks
void again(float& amount, int& Nstock, float& Cstock) { // Pass by reference to modify the variables
    char buy;
    int num;  // Declare num variable here for local use
    cout << "Do you want to buy? (y/n): ";
    cin >> buy;
    
    if (buy == 'y' || buy == 'Y') {
        cout << "How many stocks do you want to buy? ";
        cin >> num;
        
        // Check if there are enough stocks to buy
        if (num > Nstock) {
            cout << "Not enough stocks available." << endl;
        } else {
            purchase(amount, Nstock, Cstock, num);  // Call purchase function to buy stocks
        }
    } else if (buy == 'n' || buy == 'N') {
        cout << "Transaction cancelled." << endl;
    } else {
        cout << "Invalid input." << endl;
    }
}
void call(float amount,int Nstock,float Cstock){
    if(Nstock<=0){
        cout<<"Done1"<<endl;
        return;
    }
    again(amount, Nstock, Cstock);
    print(amount, Nstock, Cstock);
    call(amount, Nstock, Cstock);
}

int main() {
    float amount;
    int Nstock;
    
    cout << "Enter amount: ";
    cin >> amount;
    
    cout << "Enter number of stocks: ";
    cin >> Nstock;
    
    float Cstock = amount / Nstock;  // Initial cost of one stock
    cout << "Cost of 1 stock: " << Cstock << endl;
    call(amount, Nstock, Cstock);
    cout<<"Done 2"<<endl;
    return 0;
}