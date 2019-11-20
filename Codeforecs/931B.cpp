#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,cnt=0,cnt2=0;
    cin>>n>>a>>b;
    if(a>b)
        swap(a,b);
    int low = 1;
    int high = n;
    int match=n;
    int i;
    for(i=0; 1; i++)
    {
        match=match/2;
        cnt2++;
        if(match==1) break;
    }
    cout<<cnt2<<endl;
    for(int i=1; i<=cnt2; i++)
    {
        int diff=high-low+1;
        if(a<=high/2 && b>high/2)
        {
            break;
        }
        else
        {
            if(a> high/2 && b>high/2)
                low=(high/2)+1;
            else if(a<=high/2 && b<=high/2)
                high=high/2;
        }
    }
    cout<<i<<endl;

    if(i==1) cout<<"Final!"<<endl;
    else
    {
        cout<<cnt2-i<<endl;
    }
}
