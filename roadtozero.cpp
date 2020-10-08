typedef long long ll;
#include<iostream>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll diff=abs(x-y),cost=0;
        if(x>y)
        x=x-diff;
        else
        y=y-diff;
        cost+=diff*a;
        if(2*a<b)
        {
            cost+=2*x*a;
        }
        else
        cost+=x*b;
        cout<<cost<<endl;
        
    }
}