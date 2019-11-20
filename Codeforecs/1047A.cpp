#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l,m,k=1;
    n--;
    if(n%2==0) {l=(n/2);m=n/2;}
    else{l=n/2;m=(n/2)+1;}

    if(l%3==0 && m%3==0){
        l++;m--;
        cout<<l<<" "<<m<<" "<<k<<endl;
    }
    else if(l%3!=0 && m%3!=0){
        cout<<l<<" "<<m<<" "<<k<<endl;
    }
    else if(l%3!=0 && m%3==0)
    {
        m--; k++;
        cout<<l<<" "<<m<<" "<<k<<endl;
    }
    else if(l%3==0 && m%3!=0)
    {
        l--;k++;
        cout<<l<<" "<<m<<" "<<k<<endl;
    }
}
