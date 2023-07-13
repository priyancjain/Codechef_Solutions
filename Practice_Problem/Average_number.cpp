#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,v,val;
	    cin>>n>>k>>v;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>val;
	        sum+=val;
	    }
	    int sum_a=v*(n+k);
	    int differ=sum_a-sum;
	    if(differ/k>0 && differ%k==0)
	    {
	        cout<<differ/k<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
