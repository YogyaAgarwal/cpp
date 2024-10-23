#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while (T--)
	{
	    int A, B, C;
	    cin>>A>>B>>C;
	    
	    int sum = A+B+C;
	    if (A>=10 && B>=10 && C>=10 && sum>=100)
	    {
	        cout << "pass\n";
	    } else {
	        cout << "fail\n";
	    }
	    
	}
	
	return 0;
}
