
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





int R[4],G[4],B[4];

int r=-1,g=-1,b=-1;
void g1()
{
	int mx=0;
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			for(int k=0;k<=2;k++)
			{
				if(i!=j && j!=k && i!=k){
					int l=R[i]+G[j]+B[k];
					if(l>mx) {
						r=i,g=j,b=k;
						mx=l;
					}

				}
			}
		}
	}
}

int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    string s;
    cin>>s;
    

    for(int i=0;i<n;i++)
    {
    	if(s[i]=='R'){
    		R[(i)%3]++;
    	}
    	if(s[i]=='G'){
    		G[(i)%3]++;
    	}
    	if(s[i]=='B'){
    		B[(i)%3]++;
    	}
    }

    /*for(int i=0;i<3;i++) cout<<R[i]<<" ";
   	cout<<endl;
    for(int i=0;i<3;i++) cout<<G[i]<<" ";
   	cout<<endl;
    for(int i=0;i<3;i++) cout<<B[i]<<" ";
    	cout<<endl;*/

    g1();

    //cout<<r<<" "<<g<<" "<<b;
    int ans=0;
    for(int i=0;i<n;i++)
    {
    	if(i%3==r)
    	{
    		if(s[i]!='R') {
    			ans++;
    			s[i]='R';
    		}
    	}
    	if(i%3==g)
    	{
    		if(s[i]!='G') {
    			ans++;
    			s[i]='G';
    		}
    	}
    	if(i%3==b)
    	{
    		if(s[i]!='B') {
    			ans++;
    			s[i]='B';
    		}
    	}
    	

    }

    cout<<ans<<endl;
    cout<<s<<endl;

    


    return 0;
}


