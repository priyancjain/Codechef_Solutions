#include <iostream>
using namespace std;

int main() {
	int T;
	int X,Y,Z,z,total;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>X>>Y>>Z;
	    total=(X*5)+(Y*10);
	    z=total/Z;
	    cout<<z<<"\n";
	}
	return 0;
}
