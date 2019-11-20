#include<bits/stdc++.h>
using namespace std;

string reverseStr(string str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

        return str;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            string s1=s.substr(0,i);
            s1=reverseStr(s1);

            for(int j=0;j<i;j++)
                s[j]=s1[j];

        }
    }
    cout<<s<<endl;
}
