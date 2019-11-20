#include<bits/stdc++.h>
using namespace std;

#define cnst 1000000000000000000

int vis[101];
vector<int>ans;
vector<int>adj[101];
long long arr[101];
void bfs(long long s)
{
    for(int i=0; i<=100; i++) vis[i]=0;
    vis[s]=1;
    ans.push_back(s);
    queue<int> pq;
    pq.push(s);
    while(!pq.empty())
    {
        int top=pq.front();
        pq.pop();
        for(int i=0; i<adj[top].size(); i++)
        {
            if(!vis[adj[top][i]])
            {
                vis[adj[top][i]]=1;
                ans.push_back(adj[top][i]);
                pq.push(adj[top][i]);

            }

        }
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) cin>>arr[i];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i!=j)
            {
                if(arr[i]%3==0 && arr[j]==arr[i]/3 ) adj[i].push_back(j);
                if(arr[j] % 2 == 0 && arr[j] / 2 == arr[i])  adj[i].push_back(j);

            }
        }
    }

    /*for(int i=1;i<=n;i++){
        cout<<i<<"-->";
        for(int j=0;j<adj[i].size();j++) cout<<adj[i][j]<<" ";
        cout<<endl;
    }*/


    for(int i=1; i<=n; i++)
    {
        bfs(i);
        int q=0;
        for(int i=1; i<=n; i++) if(vis[i]==0) q=1;
        if(q==0)
        {
            for(int j=0; j<ans.size(); j++) cout<<arr[ans[j]]<<" ";
            cout<<endl;
        }
        ans.erase(ans.begin(),ans.end());

    }


}
