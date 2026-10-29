#include <iostream>
using namespace std;
double calculateCost(int quantity, double price);
 double discount(double price,double discRate, int quantity);

int main() {
    // Write C++ code here
    int quantity;
    double price,discRate;
    cout << "please enter the quantity: ";
    cin >> quantity;
    cout << "please enter the price: ";
        cin >> price;
    cout<< "please enter the amount of discount in decimal: ";
        cin >>discRate;
    cout << "the calculated original cost is: " << calculateCost(quantity, price) << endl;
    
    cout << "the final price is: " << discount( price, discRate, quantity) << endl;
    return 0;
}
double calculateCost(int quantity, double price){
    return quantity*price;
}
double discount(double price,double discRate, int quantity){
    return quantity * (price -price * (discRate));
}