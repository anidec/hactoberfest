#include<iostream>
using namespace std;
int main()
{
    int a[12]={0,3,3,2,2,5,8,9,10,11,10,5};
    map<int,int> m;
    cout<<"Enter the values: ";
    int n=11;
    each(n){
        m[a[i]]++;
    }
    cout<<endl;
    each(n){
        if(m[a[i]]!=0){
            cout<<a[i]<<" "<<m[a[i]]<<endl;
            m[a[i]]=0;
        }
    }
    return 0;
}
