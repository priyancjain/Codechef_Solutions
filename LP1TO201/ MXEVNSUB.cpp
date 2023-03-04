#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int odd,even;
	while(t--)
	{
	   int n;
	   
	   cin>>n;
	   if(n%2==0)
	   {
	       even=odd=n/2;
	   }
	   else{
	   even=n/2;
	   odd=(n/2)+1;
	   }
	   //cout<<even<<" "<<odd<<endl;
	   //cout<<(odd+1)<<endl;
	   if(odd%2==0)
	   {
	       cout<<n<<endl;
	   }
	   else
	   {
	       cout<<n-1<<endl;
	   }
	   
	}
	return 0;
}
