#include<bits/stdc++.h>
using namespace std;



int main()
{
    while(1)
    {


        int n,e;
        cin>>n;
        if(n==0)
            return 0;
        cin>>e;

        vector< int >node[206];
        int color[206];
        bool visit[206];

        memset(color,0,206*sizeof(int));
        memset(visit,0,206*sizeof(bool));
        for(int i=0; i<e; i++)
        {
            int a,b;
            cin>>a>>b;
            node[a].push_back(b);
        }

        int start=0;
        color[start]=1;
        visit[start]=1;
        queue< int > n2;
        n2.push(start);
        while(!n2.empty())
        {
            int x=n2.front();
            n2.pop();
            for(int i=0; i<node[x].size(); i++)
            {
                if(!visit[node[x][i]])
                {
                    n2.push(node[x][i]);
                    if(color[x]==1) color[node[x][i]]=2;
                    else  color[node[x][i]]=1;

                    visit[node[x][i]]=1;
                }
            }
        }
        int ppp=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<node[i].size(); j++)
            {
                if(color[node[i][j]]==color[i])
                {
                    cout<<"NOT BICOLORABLE."<<endl;
                    ppp=1;
                    break;

                }
            }
            if(ppp==1)
                break;


        }
        if(ppp==0)
            cout<<"BICOLORABLE."<<endl;



    }

}
