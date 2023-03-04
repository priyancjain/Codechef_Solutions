#include <iostream>
using namespace std;

int main() {
	int t;
	int w1,w2,x1,x2,m,w3;
	cin>>t;
	while(t--)
	{
	    cin>>w1>>w2>>x1>>x2>>m;
	    w3=w2-w1;
	   if(w3<x1*m || w3>x2*m)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
