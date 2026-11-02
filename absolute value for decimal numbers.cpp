#include <iostream>
#include <cmath>
using namespace std;
double num1(double num){
    return fabs(num);
}
int main() {
double num2;
    cout << "please enter a number";
    cin >> num2;
    cout << num1(num2);
    return 0;
}