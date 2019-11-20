#include<bits/stdc++.h>
using namespace std;

string add(string a,string b)
{
    int l1=a.size(); int l2=b.size();
    int dis=abs(l1-l2);int l=max(l1,l2);
    if(l1>l2) b.insert(0,dis,'0');
    else if(l2>l1) a.insert(0,dis,'0');
    string c;
    int p=0;
    for(int i=l-1;i>=0;i--)
    {
        int l=(a[i]-'0')+(b[i]-'0');
        if(p==1) l++;
        char d=(l%10)+'0';
        if(l/10==1) p=1;
        else p=0;
        c.push_back(d);

    }
    if(p==1) c.push_back('1');
    int n2=c.size();
    for (int i = 0; i < n2 / 2; i++)
        swap(c[i], c[n2 - i - 1]);

    return c;
}

string fib[5005];
int main()
{
    fib[0]="0" ;fib[1]="1";
    long long cnt=2;
    string a="0",b="1";
    for(int i=0;1;i++)
    {
        string l=add(a,b);
        fib[cnt]=l;
        cnt++;
        if(cnt==5001) break;
        a=b;
        b=l;
    }

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        cout<<fib[n]<<endl;
    }


}
