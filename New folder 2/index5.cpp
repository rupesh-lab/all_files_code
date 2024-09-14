#include <iostream>
using namespace std;

void print(float amount,int Nstock,float Cstock){
    cout << "Cost of company: " << amount << endl;
    cout << "Number of Stocks: " << Nstock << endl;
    cout << "Cost of 1 Stock: " << Cstock << endl;  
    cout<<endl;
}

// Function to handle the purchase of stocks
void purchase(float& amount, int& Nstock, float& Cstock, int num) {
    amount += (num * Cstock);    // Update the total amount
    Nstock -= num;               // Decrease the number of stocks
    Cstock = amount / Nstock;    // Recalculate the cost per stock
}

void call(float amount,int Nstock,float Cstock, int num, float fix){
    
    if(Nstock<=fix){
        cout<<"Done1"<<endl;
        return;
    }
    purchase(amount, Nstock, Cstock, num); 
    print(amount, Nstock, Cstock);
    call(amount, Nstock, Cstock, num, fix);
}

int main() {
    float amount;
    int Nstock, num;
    
    cout << "Enter amount: ";
    cin >> amount;
    
    cout << "Enter number of stocks: ";
    cin >> Nstock;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"percentage of company share owned: ";
    float share, percent;
    cin>>share;
    percent=share/100.0;
    cout<<percent<<endl;
    float fix=Nstock*percent;
    cout<<"FIX: ";
    cout<<fix<<endl;
    float Cstock = amount / Nstock;  // Initial cost of one stock
    cout << "Cost of 1 stock: " << Cstock << endl;
    call(amount, Nstock, Cstock, num, fix);
    cout<<"Done 2"<<endl;
    return 0;
}
