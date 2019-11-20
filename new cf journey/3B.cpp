
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

#define maximam 100003



int main()
{

	int n=Int,k=Int;
	vector<pair<int,int>> v1,v2;

	for(int i=0;i<n;i++){
		int x=Int,y=Int;
		if(x==1) v1.pb(make_pair(y,i+1));
		else v2.pb(make_pair(y,i+1));
		
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int l1=v1.size()-1;
	int l2=v2.size()-1;
	vector<int>ans;
	ll pk=0;
	while(k!=0){
		if(k==1){
			if(l1==-1) break;
			else{

				pk+=v1[l1].first;ans.pb(v1[l1].second);l1--;k--;
			}
		}
		else{
			if(l1>=1){
				if(l2==-1){
					pk+=v1[l1].first;ans.pb(v1[l1].second);l1--;k--;
				}
				else{

					int x=v1[l1].first + v1[l1-1].first;
					int y=v2[l2].first;
					if(x>y){
						pk+=x;ans.pb(v1[l1].second);ans.pb(v1[l1-1].second);l1-=2;k-=2;
					}
					else{
						pk+=y;ans.pb(v2[l2].second);l2--;k-=2;
					}
				}
				
			}
			else if(l1==-1){
					if(l2==-1) break;
					else{
						pk+=(v2[l2].first);ans.pb(v2[l2].second);l2--;k-=2;
					}
			}
			else if(l1==0){
				if(l2==-1){
					pk+=v1[l1].first;ans.pb(v1[l1].second);l1--;k--;
				}
				else
				{
					int x=v1[l1].first;
					int y=v2[l2].first;
					if(x>y){
						pk+=x;ans.pb(v1[l1].second);l1--;k--;
					}
					else{
						pk+=y;ans.pb(v2[l2].second);l2--;k-=2;
					}	
				}
			}


			
		}

	}

	cout<<pk<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	cout<<endl;


    
    return 0;
}


