
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
#define  MAX              100007



struct node
{
	int cnt;
	node* next[4];
	node()
	{
		cnt=0;
		for(int i=0;i<=3;i++) next[i]=NULL;
	}
};

int fi(char d)
{
	if(d=='A') return 0;
	if(d=='C') return 1;
	if(d=='G') return 2;
	if(d=='T') return 3;
}

node* root;

ll add(string s)
{
	node* cur= root;
	ll ans=0;
	for(int i=0;i<s.size();i++)
	{
		node* temp;
		if(cur->next[fi(s[i])]== NULL) {temp=new node(); cur->next[fi(s[i])]=temp; temp->cnt++;cur=temp;}
		else {cur=cur->next[fi(s[i])];cur->cnt++;}
		ans=max(ans, (ll)(i+1)*(ll)(cur->cnt));
	}
	return ans;
}

/*ll chk(string s)
{
	node* cur = root;
	
	for(int i=0;i<s.size();i++)
	{
		cur=cur->next[s[i]-'A'];
		//cout<<cur->cnt<<endl;
		
	}

	return ans;
}*/

void del(node* cur)
{
	for (int i = 0; i <4; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}


int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int tes=Int;
    for(int te=1;te<=tes;te++){

    int n=Int;
    string s[n+1];
    root = new node();
    ll ans=0;
    for(int i=0;i<n;i++)
    {
    	cin>>s[i];
    	//add(s[i]);
    	ans=max(ans,add(s[i]));

    }
    //Case 3: 20
    

    printf("Case %d: %lld\n",te,ans);
    del (root);
}
    
    
    return 0;
}


