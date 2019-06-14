#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue<int>qu1;
    priority_queue<int>qu2;

    for(int i=0; i<n; i++)
    {
        int z;
        cin>>z;
        qu1.push(z);
    }
    for(int i=0; i<n; i++)
    {
        int z;
        cin>>z;
        qu2.push(z);
    }


    long long sum1=0,sum2=0;

    for(int i=1; i<=n; i++)
    {

        if(qu1.empty() || qu2.empty())
        {
            if(qu1.empty())
            {
                qu2.pop();
            }
            else
            {
                int x=qu1.top();
                sum1+=x;
                qu1.pop();
            }

        }
        else
        {
            int x=qu1.top();
            int y=qu2.top();
            if(x>y)
            {
                qu1.pop();
                sum1+=x;
            }
            else
            {
                qu2.pop();
            }
        }

        if(qu1.empty() || qu2.empty())
        {
            if(qu1.empty())
            {
                int x=qu2.top();
                sum2+=x;
                qu2.pop();
            }
            else
            {
               qu1.pop();
            }
        }
        else
        {


            int x=qu1.top();
            int y=qu2.top();
            if(y>x)
            {
                qu2.pop();
                sum2+=y;
            }
            else
            {
                qu1.pop();
            }
        }






    }

    cout<<sum1-sum2<<endl;

}
