
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
    int a;
    
    int win=1;
    int l=s.size();

    while(1){
	int kk=0;
	string p="";
	//cout<<s<<endl;
	//cout<<l<<endl;
	int k=l;
    for(int i=0;i<l;i++)
    {

    	char ch=s[i];
    	int cnt=0;
    	int j;
    	for(j=i;j<l;j++)
    	{
    		if(s[j]!=ch) break;
    		cnt++;
    	}
    	//cout<<" "<<cnt<<endl;
    	if(cnt>=2) kk++;
    	if(cnt%2!=0) p.pb(ch),k=k-(cnt-1);
    	else k=k-cnt;
    	if(cnt>=2){
    	if((cnt/2)%2 ==0) 
    		{
    			if(win==1) win=1;
    			else win=2;
    		}
    	else
    	{
    		 if(win==1) win=2;
    		 else win=1;
    	}
    		}


    	i=j-1;

    }//cout<<win<<endl;
    s=p;l=k;
    if(kk==0 || l==0) break;
    
	}
	if(win==2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

    
    return 0;
}


