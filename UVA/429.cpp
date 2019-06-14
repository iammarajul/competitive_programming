
#include<bits/stdc++.h>
using namespace std;



int sc1(){int x; scanf("%d",&x); return x;}

long long sc2(){long long x;scanf("%lld",&x);return x;}

#define  gcd(a,b)         __gcd(a,b)
#define  lcm(a,b)         (a*b)/gcd(a,b)
#define  Int              sc1()
#define  LL               sc2()
#define  For(n)           for(int i=0;i<n;i++)
#define  Forj(n)          for(int j=0;j<n;j++)
#define  Fork(n)          for(int k=0;k<n;k++)
#define  For1(n)          for(int i=1;i<=n;i++)
#define  ll               long long
#define  vi               std::vector<int>
#define  vll              std::vector<ll>
#define  qui              qu
#define  pb               push_back
#define  mpsi             std::map<string, int>




int cheak(string a,string b){
	int cnt=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=b[i]) cnt++;
	}
	return cnt;
}

int bfs(int s,vector<int> v[202],int e,int n){


	int lab[n+1],vis[n+1];
	for(int i=0;i<=n;i++) lab[i]=10e8,vis[i]=0;
	lab[s]=0;vis[s]=1;
	queue<int> qu;
	qu.push(s);
	while(!qu.empty())
	{
		int top=qu.front();
		qu.pop();
		for(int i=0;i<v[top].size();i++)
		{
			if(!vis[v[top][i]]){
				vis[v[top][i]]=1;
				lab[v[top][i]]=lab[top]+1;
				qu.push(v[top][i]);
			}
		}
	}
	return lab[e];
}


int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int nnn;
    cin>>nnn;
    while(nnn--){
	string s[202];
	map<string ,int>mp;
	int cnt=0;
    while(1){
    	string d;
    	cin>>d;
    	if(d.compare("*")==0) break;
    	else {
    		mp[d]=cnt;
    		s[cnt++]=d;
    	}
    }
    std::vector<int> adj[202];
    for(int i=0;i<cnt;i++)
    {
    	string ck=s[i];
    	for(int j=0;j<cnt;j++)
    	{
    		if(i!=j)
    		{
    			string ck2=s[j];
    			if(ck2.size()==ck.size()){
    				if(cheak(ck,ck2)==1) {
    					adj[mp[ck]].pb(mp[ck2]);
    				}
    			}
    		}
    	}
    }

    //cout<<bfs(0,adj,6,cnt);
    //start debug
    /*for(int i=0;i<cnt;i++)
    {
    	cout<<i<<"->";
    	for(int j=0;j<adj[i].size();j++)
    	{
    		cout<<adj[i][j]<<" ";
    	}
    	cout<<endl;
    }*/


    string start,to,line;
    size_t pos;
    getline(cin,line);
    getline(cin,line);
    while(line != ""){
      pos = line.find(" ");
      start = line.substr(0,pos);
      to = line.substr(pos+1,line.size());
      //visited.clear();
      //cout<<mp[start]<<" "<<mp[to]<<endl;
      cout<<start<<" "<<to<<" "<<bfs(mp[start],adj,mp[to],cnt)<<endl;
      if(!getline(cin,line))
        break;
    }
    if(nnn!=0) cout<<endl;


}


    
    return 0;
}


