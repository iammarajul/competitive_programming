#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int te=1; te<=t; te++)
    {
        int n,q;
        cin>>n>>q;
        vector<int>vc;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            vc.push_back(x);
        }
        while(q--)
        {
            char ch;
            int a,b;
            cin>>ch;
            if(ch=='S')
            {
                cin>>a;
                for(int i=0; i<vc.size(); i++) vc[i]+=a;
            }
            else if(ch=='M')
            {
                cin>>a;
                for(int i=0; i<vc.size(); i++) vc[i]*=a;
            }

            else if(ch=='D')
            {
                cin>>a;
                for(int i=0; i<vc.size(); i++) vc[i]/=a;
            }

            else if(ch=='R')
            {
                reverse(vc.begin(),vc.end());
            }
            else if(ch=='P')
            {
                cin>>a>>b;
                swap(vc[a],vc[b]);
            }
        }
    printf("Case %d:\n",te);
    for(int i=0; i<vc.size(); i++) {
            cout<<vc[i];
            if(i!=vc.size()-1) cout<<" ";
    }
    cout<<endl;

    }


}


