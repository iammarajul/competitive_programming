#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int bb=1;bb<=test;bb++)
    {
    int n;
    cin>>n;
    vector<int >k;
    vector<int >::iterator it;
    while(1)
    {
        int rm;
        rm=n%2;
        k.push_back(rm);
        n=n/2;
        if(n==0) break;
    }
    reverse(k.begin(),k.end());
    int p=-1;
    for(int i=0;i<k.size()-1;i++)
    {
        if(k[i]==0 && k[i+1]==1){
            //swap(k[i],k[i+1]);
            p=i;
            //break;
        }
    }
    if(p!=-1)
    {
        swap(k[p],k[p+1]);
        int bl=k.size()-p-2;
        //cout<<bl<<endl;
        int cnt=0;
        for(int i=p+2;i<k.size();i++) if(k[i]==1) cnt++;
        for(int i=p+2;i<p+2+(bl-cnt);i++) k[i]=0;
        for(int i=p+2+(bl-cnt);i<k.size();i++) k[i]=1;

    }
    else if(p==-1)
    {
        it=k.begin();
        it++;
        k.insert(it,0);
        int p=0;
        int bl=k.size()-p-2;
        int cnt=0;
        for(int i=p+2;i<k.size();i++) if(k[i]==1) cnt++;
        for(int i=p+2;i<p+2+(bl-cnt);i++) k[i]=0;
        for(int i=p+2+(bl-cnt);i<k.size();i++) k[i]=1;

    }
    long long ans=0;
    for(int i=k.size()-1,j=0;i>=0;i--,j++ )
    {
        ans+=(k[i]*pow(2,j));
    }
    cout<<"Case "<<bb<<": ";
    cout<<ans<<endl;

    }


}
