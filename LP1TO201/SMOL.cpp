#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,sum;
	    cin>>n>>k;
	    if(n<k)
	    cout<<n<<endl;
	    else if(n==k)
	    cout<<"0"<<endl;
	    else if(k==0)
	    cout<<n<<endl;
	    else
	    {
	        sum=n%k;
	        cout<<sum<<endl;
	      
	    }
	}
	return 0;
}
