#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        //cout<<n/2<<endl;
        if(n==x || x==0 || n==0)
        cout<<"0"<<endl;
        else if(n/2>=x)
        cout<<x<<endl;
        else
        cout<<(n-x)<<endl;
    }
	return 0;
}
