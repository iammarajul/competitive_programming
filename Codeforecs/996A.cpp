#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rem=n,cnt=0;
    cnt+=rem/100;
     rem=rem%100;

     cnt+=rem/20;
     rem=rem%20;

     cnt+=rem/10;
     rem=rem%10;

     cnt+=rem/5;
     rem=rem%5;

    cnt+=rem/1;
     rem=rem%1;

    cout<<cnt<<endl;


}
