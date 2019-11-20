
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
#define  MAX              100007



int rever(int num)
{
	int rev = 0;
	while (num != 0)
	{
		int rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}

	return rev;
}




int main()
{

	//freopen("input1.txt", "r", stdin);
	//freopen("outpu2.txt", "w", stdout);

	int t = Int;

	while (t--)
	{
		string s;
		cin >> s;
		int len = s.size();
		int ac=0;
		for(int i=0;i<len;i++) if(s[i]=='0') ac++;
		if (len == 1) cout << s << endl;
		else if(s[0]== '1' && ac==len-1) 
		{
			for(int i=1;i<len;i++) cout<<"9";
			cout<<endl;
		}
		else {
			for (int i = len - 1; i >= 1; i--)
			{
				if (s[i] != '9') {
					int j = i - 1;
					for (; 1; j--)
					{
						if (s[j] != '0') break;
					}
					if (j != 0) {
						for(int k=j+1;k<=i;k++) s[k]='9';
						s[j] = s[j] - 1;
						i = j + 1;
					}
					else
					{
						if (s[j] > '1')
						{
							for(int k=j+1;k<=i;k++) s[k]='9';
							s[j] = s[j] - 1;
							i = j + 1;
						}
					}
				}
			}

			cout << s << endl;
		}
	}


	return 0;
}


