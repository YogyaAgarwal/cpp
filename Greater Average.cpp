#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        
        if(2*C < (A+B))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
