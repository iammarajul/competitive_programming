#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n],min=1000000000,temp1,temp2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(min>arr[i]) min=arr[i];
    }
    vector < int > a;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(min==arr[i])
        {
            temp1=i;
            if(ans)
            {
                long long diff=temp1-temp2;
                a.push_back(diff);
            }

            temp2=temp1;
            ans++;
        }
    }

    int max=a[0];
    for(int i=0;i<a.size();i++)
    {
        if(max>a[i])
            max=a[i];
    }

    cout<<max<<endl;
}
