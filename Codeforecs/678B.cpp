#include<bits/stdc++.h>
using namespace std;

bool leapYear(int n)
{
    if((n%4==0 && n%100!=0) ||(n%400==0)) return true;
    else return false;

}

map<int,int >mp;

int main()
{
    int n;
    cin>>n;
    mp[n]=1;
    for(int i=n+1;; i++)
    {
        if(leapYear(i-1)==true)
        {
            mp[i]=mp[i-1]+2;

        }
        else
        {
            mp[i]=mp[i-1]+1;
        }

        if(mp[i]%7==1)
        {
            if((leapYear(n)==true && leapYear(i)==true) || (leapYear(n)==0 && leapYear(i)==0))
            {

                cout<<i<<endl;
                break;
            }
        }
    }


}
