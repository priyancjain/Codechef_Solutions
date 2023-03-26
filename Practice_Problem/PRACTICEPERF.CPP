#include <iostream>
using namespace std;

int main() {
	int P1,P2,P3,P4;
	int count=0;
	cin>>P1>>P2>>P3>>P4;
	if(P1>=10)
	count++;
	if(P2>=10)
	count++;
	if(P3>=10)
	count++;
	if(P4>=10)
	count++;
	cout<<count;
	return 0;
}
