
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

    int n=Int;
    string s;
    cin>>s;
    char arr[]={'R','G','B'};
    int arr2[200];
    arr2[(int) 'R']=0;
    arr2[(int) 'G']=1;
    arr2[(int) 'B']=2;
    int ans=0;
    for(int i=0;i<n;i++)
    {
    	char ch=s[i];
    	int cnt=0,j;
    	for(j=i;j<n;j++)
    	{
    		if(ch!=s[j]) break;
    		cnt++;
    	}
    	//cout<<cnt<<endl;
    	if(cnt%2!=0)
    	{
    		char ck=arr[(arr2[(int) ch]+1)%3];
    		//cout<<ck<<endl;
    		for(int k=i+1;k<j-1;k+=2) {s[k]=ck;ans++;}
    	}
    	else{
    		char ck;
    		if(j>=n) {ck=arr[(arr2[(int)ch]+1)%3];}
    		else{
    		if(arr2[(int)ch]+arr2[(int)s[j]]==1) ck='B';
    		if(arr2[(int)ch]+arr2[(int)s[j]]==2) ck='G';
    		if(arr2[(int)ch]+arr2[(int)s[j]]==3) ck='R';
    		}
    		//cout<<ck<<endl;

    		for(int k=i+1;k<j;k+=2) {s[k]=ck,ans++;}
    	}
    	i=j-1;

    }

    cout<<ans<<endl;
    cout<<s<<endl;
    
    return 0;
}


