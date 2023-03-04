#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a;
	while(t--)
	{
	    cin>>a;
	    if(a<100 && a>=1)
	    cout<<"Easy"<<endl;
	    else if(a<200 && a>=100)
	    cout<<"Medium"<<endl;
	    else if(a<=300 && a>=200)
	    cout<<"Hard"<<endl;
	}
	return 0;
}
