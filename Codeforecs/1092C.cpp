
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

int n;
int ans[202];
struct Ab
{
    std::vector < string > a;
    std::vector < int > v;
}node[102];

int find(string d)
{
    memset(ans,0,sizeof(ans));
    int l=d.size();
    for(int i=1;i<=n-1;i++)
    {
        string s1=node[i].a[0];
        string s2=node[i].a[1];

        string pre=d.substr(0,i);
        string suf=d.substr(l-i,i);

        if(s1.compare(pre)==0 && s2.compare(suf)==0)
        {
            ans[node[i].v[0]]=0;
            ans[node[i].v[1]]=1;
        }
        else if(s1.compare(suf)==0 && s2.compare(pre)==0)
        {
            ans[node[i].v[0]]=1;
            ans[node[i].v[1]]=0;
        }
        else return 0;

    }
    return 1;
}


int main()
{
    

    cin >> n;

    for (int i = 0; i < 2 * n - 2; i++)
    {
        string x;
        cin >> x;
        node[x.size()].a.pb(x);
        node[x.size()].v.pb(i + 1);
    }

    //for (int i = 1; i <= n - 1; i++)
    //{
    //    cout << node[i].a[0] << " " << node[i].a[1] << " " << node[i].v[0] << " " << node[i].v[1] << endl;
    //}

    string s1=node[n-1].a[0];
    string s2=node[n-1].a[1];


    string sub1=s1.substr(1,n-2);
    string sub2=s2.substr(0,n-2);
    
    

    if(sub1.compare(sub2)==0) 
    {
        if(find(s1+s2)==1)
        {
            for(int i=1;i<=2*n-2;i++) ans[i]==0?cout<<"P":cout<<"S";
            cout<<endl;
        }
        else
        {
            int c=find(s2+s1);
            for(int i=1;i<=2*n-2;i++) ans[i]==0?cout<<"P":cout<<"S";
            cout<<endl;
        }

    } 
    else
    {
            int c=find(s2+s1);
            for(int i=1;i<=2*n-2;i++) ans[i]==0?cout<<"P":cout<<"S";
            cout<<endl;
    }










    return 0;
}


