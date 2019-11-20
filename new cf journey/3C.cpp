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


bool cheak(string s[3],char x)
{
	if(s[0][0]==x && s[0][1]==x && s[0][2]==x) return true;
	else if(s[1][0]==x && s[1][1]==x && s[1][2]==x) return true;
	else if(s[2][0]==x && s[2][1]==x && s[2][2]==x) return true;

	else if(s[0][0]==x && s[1][0]==x && s[2][0]==x) return true;
	else if(s[0][1]==x && s[1][1]==x && s[2][1]==x) return true;
	else if(s[0][2]==x && s[1][2]==x && s[2][2]==x) return true;

	else if(s[0][0]==x && s[1][1]==x && s[2][2]==x) return true;
	else if(s[0][2]==x && s[1][1]==x && s[2][0]==x) return true;
	else return false;

	



}




int main()
{

	string s[3];
	cin>>s[0]>>s[1]>>s[2];
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			if(s[i][j]=='X') cnt1++;
			else if(s[i][j]=='0') cnt2++;
			else if(s[i][j]=='.') cnt3++;
		}
	}
	if(cnt2+1==cnt1 || cnt1==cnt2){
		if(cheak(s,'X')==true && cnt1==cnt2) cout<<"illegal"<<endl;
		else if(cheak(s,'0')==true && cnt1==1+cnt2) cout<<"illegal"<<endl;

		else if(cheak(s,'X')==true) cout<<"the first player won"<<endl;
		else if(cheak(s,'0')==true) cout<<"the second player won";
		else if(cnt1==5) cout<<"draw"<<endl;
		else if(cnt2+1==cnt1) cout<<"second"<<endl;
		else if(cnt1==cnt2) cout<<"first"<<endl;

	}
	else{
		cout<<"illegal"<<endl;
	}
    
    return 0;
}


