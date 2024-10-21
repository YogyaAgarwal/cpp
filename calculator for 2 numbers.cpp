#include <iostream>
using namespace std;
 
int main() {
    
    int a, b ;

    cout << "enter a = ";
    cin >> a;

    cout << "enter b = ";
    cin >> b;
    
    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/b) << endl;
    cout << "modulo/remainder = " << (a%b) << endl; 

    return 0;
}
