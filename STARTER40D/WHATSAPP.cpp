#include <iostream>
using namespace std;

int main() {
    int T,X,Y,Z,total;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>X>>Y>>Z;
        total=(X-Y)*Z;
        cout<<total<<"\n";
    }
	return 0;
}
