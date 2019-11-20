#include<bits/stdc++.h>
using namespace std;
bool prime[100004];

void sh(int n)
{
    prime[1]=1;

    int sq=sqrt(n);

    for(int i=4; i<=n; i+=2) prime[i]=1;


    for (int p=3; p<=sq; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 0)
        {
            // Update all multiples of p
            for (int i=p*p; i<=n; i += p)
                prime[i] = 1;
        }
    }

    // Print all prime numbers

}

int main()
{
    sh(100000);
    int nb,k;
    cin>>nb>>k;

    if(prime[nb]==0)
    {
        if(k==1) cout<<nb<<endl;
        else cout<<-1<<endl;
    }
    else
    {

        vector<int>x1;
        vector<int> x2;
        int sq=sqrt(nb);
        for (int p=2; p<=sq; p++)
            if (prime[p]==0)
                x1.push_back(p);
        int ss=nb,cnt=0;
        while(1)
        {
            if(prime[ss]==0) {x2.push_back(ss);break;}
            if(ss==1) break;

            while(ss%x1[cnt]==0)
            {
                if(ss%x1[cnt]!=0) break;
                x2.push_back(x1[cnt]);
                ss=ss/x1[cnt];
            }
            cnt++;

        }


        if(k>x2.size()) cout<<-1<<endl;
        else{
            int dis=x2.size()-k;
            int mul=1;
            for(int i=0;i<=dis;i++) mul*=x2[i];
            cout<<mul<<" ";
            for(int i=dis+1;i<x2.size();i++) cout<<x2[i]<<" ";
        }




    }
}
