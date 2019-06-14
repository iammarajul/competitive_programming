#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        map< string , int > mp;
        map< string , int >::iterator it;
        int n=0;

        while(1)
        {
            string s;
            getline(cin,s);
            if(s.compare("")==0) break;
            mp[s]++;
            n++;

        }
        for(it=mp.begin();it!=mp.end();it++)
        {
            double ans;
            ans=((double)(it->second)*100.00)/(double)n;
            cout<<it->first<<" ";
            printf("%.4lf\n",ans);
        }

    }
}
