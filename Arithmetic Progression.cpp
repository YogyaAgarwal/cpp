#include <iostream>
using namespace std;

int main() {
	
	int t;
	
	cin >> t;
	while (t--) {
	    
	    int x, y, z;
	    cin >> x;
	    cin >> y;
	    cin >> z;
	    
	    if (y-x == z-y) {
	        cout << "0\n";
	    } else {
	        cout << "1\n"; 
	    }
	}
	return 0;
}
