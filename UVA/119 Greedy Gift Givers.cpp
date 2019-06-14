#include<bits/stdc++.h>
using namespace std;

map< string,int > mp;

int main()
{
    int n,cnt=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(cnt) cout<<endl;
        cnt++;

        string name[11];

        for(int i=0; i<n; i++)
        {
            cin>>name[i];
            mp[name[i]]=0;
        }
        for(int i=0; i<n; i++)
        {
            string s;
            int taka,num;
            cin>>s>>taka>>num;
            if(num)
                mp[s]=mp[s]-taka+(taka%num);
            for(int j=1; j<=num; j++)
            {
                string s2;
                cin>>s2;
                if(num)
                    mp[s2]+=(taka/num);
                //s2.erase();

            }
            //s.erase();

        }
        //cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<name[i]<<" "<<mp[name[i]]<<endl;
        }
        //cout<<endl;
    }
}
