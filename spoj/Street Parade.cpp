#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) return 0;
        stack< int >st;
        vector< int >arr;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            while(!st.empty() && st.top()>x)
            {
                arr.push_back(st.top());
                st.pop();
            }
            st.push(x);

        }

        while(st.size())
        {
            arr.push_back(st.top());
            st.pop();
        }

        int flag=0;
        for(int i=0; i<arr.size()-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                cout<<"no"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"yes"<<endl;
    }
}
