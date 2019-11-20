
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







int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    cin>>s;
    int l=s.size();
    int n;
    cin>>n;
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='*') cnt1++;
    	else if(s[i]=='?') cnt2++;
    	else cnt3++;
    }
    if(cnt1==0 && cnt2==0)
    {
    	if(l!=n)
    	cout<<"Impossible"<<endl;
    	else 
    	cout<<s<<endl;	
    }
    else{
    	if(cnt3<n)
    	{
    		if(cnt1==0)
    			cout<<"Impossible"<<endl;
    		else{
    			int kk=n-cnt3,pp=1;
    			for(int i=0;i<l;i++){
    				if(s[i]=='*' && pp){
    					for(int j=0;j<kk;j++) cout<<s[i-1];
    					pp=0;
    				}

    				else if(s[i]!='?' && s[i]!='*') cout<<s[i];
    			}
    			cout<<endl;
    		}

    	}
    	else 
    	{
    		if(cnt3==n) 
    		{
    			for(int i=0;i<l;i++) 
    			{
    				if(s[i]!='*' && s[i]!='?') cout<<s[i];
    			}
    			cout<<endl;
    		}
    		else
    		{
    			int kk=cnt3-n;
    			if(kk>cnt1+cnt2) cout<<"Impossible"<<endl;
    			else{
    				string ans="";
    				for(int i=0;i<l;i++)
    				{
    					if(kk){
    					if(s[i]=='*' || s[i]=='?')
    						kk--,ans.pop_back();
    					else ans.pb(s[i]);
    					}
    					else
    						if(s[i]!='*' && s[i]!='?') ans.pb(s[i]);
    				}
    				cout<<ans<<endl;
    			} 
    		}

    	}

    } 

    
    return 0;
}


