#include <iostream>
#include <fstream>  // Include for file handling
using namespace std;

// Function to print and log the data
void print(float amount, int Nstock, float Cstock, int have, ofstream& file) {
    cout << endl;
    cout << "Cost of company: " << amount << endl;
    cout << "Number of Stocks: " << Nstock << endl;
    cout << "Cost of 1 Stock: " << Cstock << endl;
    cout << "Number of Stocks Owned: " << have << endl;
    cout << endl;
    
    // Write data to the file for plotting
    file << amount << "," << Nstock << "," << Cstock << "," << have << endl;
}

// Function to handle purchasing of stocks
void purchase(float& amount, int& Nstock, float& Cstock, int num) {
    amount += (num * Cstock);
    Nstock -= num;
    Cstock = amount / Nstock;
}

// Function to handle selling of stocks
void sell(float& amount, int& Nstock, float& Cstock, int num) {
    amount -= (num * Cstock);
    Nstock += num;
    Cstock = amount / Nstock;
}

// Function to handle user input for buying/selling stocks
void again(float& amount, int& Nstock, float& Cstock, int& have, ofstream& file) {
    char buy;
    cout << "Do you want to buy/sell? (b/s): ";
    cin >> buy;

    if (buy == 'b' || buy == 'B') {
        cout << "How many stocks do you want to buy? ";
        int num;
        cin >> num;
        if (num > Nstock) {
            cout << "Not enough stocks available." << endl;
        } else {
            have = have + num;
            purchase(amount, Nstock, Cstock, num);
        }
    } else if (buy == 's' || buy == 'S') {
        cout << "How many stocks do you want to sell? ";
        int num;
        cin >> num;
        if (num > have) {
            cout << "Not enough stocks to sell." << endl;
        } else {
            have = have - num;
            sell(amount, Nstock, Cstock, num);
        }

    } else {
        cout << "Invalid input." << endl;
    }
}

// Recursive function to continuously ask for transactions
void call(float amount, int Nstock, float Cstock, int have, ofstream& file) {
    again(amount, Nstock, Cstock, have, file);
    print(amount, Nstock, Cstock, have, file);
    call(amount, Nstock, Cstock, have, file);
}

int main() {
    float amount;
    int Nstock;
    int have = 0;

    // Open a file to log data
    ofstream file("stock_data.csv");
    if (!file.is_open()) {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Write the header to the CSV file
    file << "Cost_of_company,Number_of_stocks,Cost_of_1_stock,Stocks_owned" << endl;

    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter number of stocks: ";
    cin >> Nstock;
    float Cstock = amount / Nstock;
    cout << "Cost of 1 stock: " << Cstock << endl;

    call(amount, Nstock, Cstock, have, file);

    file.close(); // Close the file after use
    return 0;
}
