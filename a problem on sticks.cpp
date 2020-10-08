typedef long long int ll;
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=0;
        cin>>n;
        set<ll> s;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s.insert(a);
        }
        for(auto i=s.begin();i!=s.rend();i++)
        {
            if(*i!=0)
            {
                c++;
            }
            
        }
        cout<<c<<endl;
    }
}