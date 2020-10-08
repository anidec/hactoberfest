typedef long long int ll;
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        ll arr[n+1][n+1],temp;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>=1;j--)
            {
                if(arr[i][j]!=(i-1)*n +j)
                {
                    count++;
                    for(int x=1;x<=j;x++)
                    {
                        for(int y=x+1;y<=j;y++)
                        {
                            temp=arr[x][y];
                            arr[x][y]=arr[y][x];
                            arr[y][x]=temp;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
        
    }
}