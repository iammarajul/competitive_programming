#include<bits/stdc++.h>
using namespace std;

int arr[300];
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int sum=0,cnt=0;
    if(k>13) cout<<-1<<endl;
    else
    {
        for(int i=0;i<s.size();i++)
        {
            arr[(int)s[i]]=1;
        }

        for(int i=97;i<=122;i++)
        {
            if(arr[i]==1)
            {
                sum+=i-96;
                cnt++;
                i++;
                if(cnt==k) break;
            }
        }

    if(cnt==k)
    cout<<sum<<endl;
    else cout<<-1<<endl;
    }
}
