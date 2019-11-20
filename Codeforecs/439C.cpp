#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,p;
    cin>>n>>k>>p;
    int arr[n+1];
    vector<int>od,ev;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%2==0) ev.push_back(x);
        else od.push_back(x);

    }
    vector<int >vc[k+1];
    int evl=ev.size(),odl=od.size();
    if(k-p>odl) cout<<"NO"<<endl;
    else{
        int ob=odl-(k-p);
        if(ob%2!=0) cout<<"NO"<<endl;
        else{
            if(evl<p && ob<(p-evl)*2) cout<<"NO"<<endl;
            else{
                    if((odl==k-p) &&(evl==p))
                    {
                        cout<<"YES"<<endl;
                        for(int i=0;i<odl;i++) cout<<1<<" "<<od[i]<<endl;
                        for(int i=0;i<evl;i++) cout<<1<<" "<<ev[i]<<endl;

                    }
                    else if(odl>=k-p && evl>=p)
                    {
                         cout<<"YES"<<endl;

                        if(p==0)
                        {
                            int i=0;
                            for(i=0;i<k-p-1;i++) cout<<1<<" "<<od[i]<<endl;
                            cout<<1+(evl-p)+(odl-(k-p))<<" ";
                            cout<<od[i]<<" ";
                            for(int i=k-p;i<odl;i++) cout<<od[i]<<" ";
                            for(int i=p;i<evl;i++) cout<<ev[i]<<" ";
                            cout<<endl;

                        }
                        else{
                        for(int i=0;i<k-p;i++) cout<<1<<" "<<od[i]<<endl;
                        for(int i=0;i<p-1;i++) cout<<1<<" "<<ev[i]<<endl;
                        cout<<1+(evl-p)+(odl-(k-p))<<" ";

                        for(int i=k-p;i<odl;i++) cout<<od[i]<<" ";
                        for(int i=p-1;i<evl;i++) cout<<ev[i]<<" ";
                        cout<<endl;
                        }
                    }
                    else if(odl>k-p && evl<p)
                    {
                         cout<<"YES"<<endl;
                        int sk=k-p;
                        for(int i=0;i<k-p;i++) cout<<1<<" "<<od[i]<<endl;
                        for(int i=0;i<evl;i++) cout<<1<<" "<<ev[i]<<endl;
                        for(int i=evl;i<p-1;i++) {cout<<2<<" "<<od[sk]<<" "<<od[sk+1]<<endl; sk+=2;}
                        cout<<odl-((k-p)+(sk-(k-p)))<<" ";
                        for(int i=sk;i<odl;i++) cout<<od[i]<<" ";
                        cout<<endl;

                    }

            }
        }
    }


}
