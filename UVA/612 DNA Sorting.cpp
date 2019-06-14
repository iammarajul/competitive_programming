#include<bits/stdc++.h>
using namespace std;

struct node
{
    string s;
    int n;
};

bool cmp(node A,node B)
{
    if(A.n<B.n) return true;
    else return false;

}

int main()
{
    int test;
    cin>>test;
    for(int ok=1; ok<=test; ok++)
    {


        node arr[200];
        int l,no;
        cin>>l>>no;
        for(int i=0; i<no; i++)
        {
            string st;
            cin>>st;
            arr[i].s=st;
            int sum=0;
            for(int j=0; j<st.size(); j++)
            {
                for(int k=j+1; k<st.size(); k++)
                {
                    if(st[j]>st[k]) sum++;
                }
            }
            arr[i].n=sum;
        }
        sort(arr,arr+l,cmp);

        for(int i=0; i<no; i++)
        {
            cout<<arr[i].s<<endl;
        }

        if(ok!=test)
            cout<<endl;

    }



}
