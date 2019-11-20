
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
    int st1=-1,st2=-1;
    for(int i=0;i<l-3;i++)
    {
        if(s[i]=='[')
        {
            st1=i;
            break;
        }
    }
    if(st1!=-1)
    {
        for(int i=st1+1;i<l-2;i++)
        {
            if(s[i]==':') {
                st2=i;
                break;
            }
        }

    }

    int st3=-1,st4=-1;
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]==']')
        {
            st3=i;
            break;
        }
    }
    if(st3!=-1){
        for(int i=st3-1;i>=st2+1;i--)
        {
            if(s[i]==':') {
                st4=i;
                break;
            }
        }
    }
    if(st2==-1 || st4==-1) cout<<-1<<endl;
    else
    {
        int ans=0;
        for(int i=st2+1;i<=st4-1;i++)
        {
            if(s[i]=='|') ans++;
        }

        cout<<ans+4<<endl;
    }



    return 0;
}


