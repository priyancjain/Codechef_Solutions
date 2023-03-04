#include <iostream>
using namespace std;

int main() {
	int t;
	int n,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b>>c;
	    if((a+c)>=n && b>=n)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
