#include<iostream>
using namespace std;
int main()
{
    string s="animesh";
    cout<<s.length()<<endl;
    int n = s.length();
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt += s[i];  
        
    cout<<"The value of your name : "<<cnt;
}
