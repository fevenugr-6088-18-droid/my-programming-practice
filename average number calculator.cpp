#include <iostream>
using namespace std;
double average(double, double, double);
int main() {
    int a,b,c;
    cout << "please enter 3 numbers";
    cin >> a >> b >> c;
cout << "the average of 3 numbers are" << average(a,b,c);
    return 0;
}
double average(double a, double b, double c){
    return (a+b+c)/3;
}