
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

    int n;
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int arr2[]={4,6,10,14};

    int cnt=0,temp;
    for(int i=0;i<=14;i++)
    {
    	cout<<arr[i]<<endl;
    	string s;
    	cin>>s;
    	if(s.compare("no")==0)
    	{
    		cnt++;
    	}
    	else
    	{
    		temp=i;
    	}
    }
    if(cnt==15)
    {
    	cout<<"prime"<<endl;
    }
    else if(cnt==14)
    {
    	for(int i=2;1;i++)
    	{
    		int x=powl(arr[temp],i);
    		if(x>100) break;
    		cout<<x<<endl;
    		string s;
    		cin>>s;
    		if(s.compare("yes")==0)
    		{
    			cout<<"composite"<<endl;
    			return 0;
    		}
    	}
    	cout<<"prime"<<endl;

    }
    else
    {
    	cout<<"composite"<<endl;
    }

    
    return 0;
}


