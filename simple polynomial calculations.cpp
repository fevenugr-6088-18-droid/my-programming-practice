#include <iostream>
#include <cmath>
using namespace std;
double distance(double x1, double x2, double y1, double y2){
     return sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
}

int main() {
    // Write C++ code here
double x1,x2,y1,y2;
cout << "please enter 4 numbers to calculate the distance : ";
    cin >> x1 >> x2 >>y1 >> y2;
    cout << distance(x1, x2, y1, y2);
    return 0;
}