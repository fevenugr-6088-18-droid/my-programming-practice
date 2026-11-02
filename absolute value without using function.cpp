#include <iostream>
using namespace std;
int difference(int a,int b){
    if(a>=b)
        return a-b;
    else
        return b-a;
}
int main() {
    int a,b;
    cout << "please enter 2 numbers";
    cin >> a >> b;
cout << "the difference of the 2 numbers is" << difference(a,b);
    return 0;
}