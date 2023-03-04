#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	float s,a,b,c;
	while(t--)
	{
	    cin>>s>>a>>b>>c;
	    s=s+(s*c/100);
	   // cout<<s<<endl;
	    if(s>=a && s<=b)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
