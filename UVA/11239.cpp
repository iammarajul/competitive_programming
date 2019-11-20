
#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}



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
#define  MAX              100007








bool cmp(const pair<int,string>&a, const pair<int ,string>&b)
{
	if(a.first>b.first) return 1;
	if(a.first<b.first) return 0;
	if(a.second<b.second) return 1;
	if(a.second>b.second) return 0;


}

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	while (1)
	{
		map<string , int>mp;
		std::vector<pair<int ,string>> ans;
		ans.erase(ans.begin(), ans.end());
		std::vector<string> v;
		set<string>st;
		set<string>::iterator it;
		for (int i = 0; 1; i++)
		{
			string s;
			getline(cin, s);
			if (s[0] == '0') return 0;
			else if (s[0] == '1')
			{
				for (it = st.begin(); it != st.end(); it++)
				{
					v.pb(*it);
					mp[*it]++;
				}
				st.erase(st.begin(), st.end());
				break;
			}
			else
			{

				if (s[0] >= 'A' && s[0] <= 'Z')
				{	
					for (it = st.begin(); it != st.end(); it++)

					{
						//cout<<*it<<"?????????"<<endl;
						v.pb(*it);
						mp[*it]++;
					}
					v.pb(s);
					st.erase(st.begin(), st.end());
				}
				else {st.insert(s);}
			}

		}
		//cout<<v.size()<<endl;
		//For (v.size()) cout<<v[i]<<endl;
		string counter = ""; int cnt = 0;
		for (int i = 0; i < v.size(); i++)
		{
			string s = v[i];
			if (s[0] >= 'A' && s[0] <= 'Z') {if(i!=0) ans.pb({cnt,counter});counter = s; cnt = 0;}
			else
			{
				//cout<<mp[s]<<"->"<<s<<endl;
				if (mp[s] == 1 )cnt++;
			}
			if(i==v.size()-1) {ans.pb({cnt,counter}); counter = s; cnt = 0;}
		}
		sort(ans.begin(), ans.end(),cmp);
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i].second<<" "<<ans[i].first<<endl;
		}

	}


	return 0;
}


