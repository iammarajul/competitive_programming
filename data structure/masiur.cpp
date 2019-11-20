#include <bits/stdc++.h>
using namespace std;

int main() {

	int t,n,k,sum,d,cnt;
	cin>>t;
	while(t>0)
	{
	cin>>n>>k;
	cnt=0;
	for(int i=1;i<=n;i++)
	{
		sum=(i*i)+(i*i*i);
		d=sqrt(sum);
		if(d*d==sum)
		cnt++;
	}
	cout<<cnt<<endl;
	if(cnt==k)
	cout<<"I am married now"<<endl;
	else
	cout<<"Baba amar ki biye hobe na"<<endl;
	t--;
	}
	// your code goes here
	return 0;
}
