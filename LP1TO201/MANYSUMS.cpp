#include <iostream>
 using namespace std;

int main()
{
    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l==r)
        {
            cout<<1<<endl;
            
        }
        else
        {
            cout<<(2*(r-l)+1)<<endl;
        }
    }
    
}