#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            cout<<b<<endl;
        }
        else 
        {
            cout<<abs(b-2*a)<<endl;
        }
        
    }
	return 0;
}
