#include <iostream>
using namespace std;
#include <cmath>
int main() {
	int t;
	cin>>t;
	float u,v,a,s;
	float V;
	
	while(t--)
	{
	    cin>>u>>v>>a>>s;
	    V=sqrt((u*u)-(2*a*s));
	    //cout<<V<<endl;
	    if(V>v)
	    cout<<"no"<<endl;
	    else
	    cout<<"yes"<<endl;
	}
	return 0;
}
