#include<bits/stdc++.h>
using namespace std;
int max2(int a,int b)
{
    if(a<b)
    return b;
    return a;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
	string s;
	cin>>s;
	stack<int> st;
	int n=s.length();
	int max1=0;
	st.push(-1);
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='(')
	            st.push(i);
	        else
	       {
	            st.pop();
	            if(!st.empty())
	            max1=max2(max1,i-st.top());
	            else
	            st.push(i);
	        }
	    }
	   // max1=max2(current,max1);
	    cout<<max1<<endl;
    }
	return 0;
}
