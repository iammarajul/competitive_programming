#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int d=1;d<=test;d++){
    int n,q;
    cin>>n>>q;
    cout<<"Case "<<d<<":"<<endl;
    list<int>vc;
    while(q--)
    {
        string s;
        int x;
        cin>>s;
        if(s.compare("pushLeft")==0)
        {
            cin>>x;
            if(vc.size()==n) cout<<"The queue is full"<<endl;
            else
            {
                vc.push_front(x);
                cout<<"Pushed in left: "<<x<<endl;
            }
        }
        else if(s.compare("pushRight")==0)
        {
            cin>>x;
            if(vc.size()==n) cout<<"The queue is full"<<endl;
            else
            {

                vc.push_back(x);
                cout<<"Pushed in right: "<<x<<endl;
            }
        }
        else if(s.compare("popLeft")==0)
        {
            if(vc.size()==0) cout<<"The queue is empty"<<endl;
            else
            {
                x=vc.front();
                cout<<"Popped from left: "<<x<<endl;
                vc.pop_front();
            }

        }
        else if(s.compare("popRight")==0)
        {
            if(vc.size()==0) cout<<"The queue is empty"<<endl;
            else
            {
                x=vc.back();
                cout<<"Popped from right: "<<x<<endl;
                vc.pop_back();
            }

        }

    }
    }
}
