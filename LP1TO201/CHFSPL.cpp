#include <iostream>
using namespace std;

int main() {
	int t;
	int a,b,c;
	int sum,sum1,sum2;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	   sum=a+b;
	   if((a+c)>sum)
	   sum=a+c;
	   if((b+c)>sum)
	   sum=b+c;
	   cout<<sum<<endl;
	}
	return 0;
}
