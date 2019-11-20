#include<bits/stdc++.h>
using namespace std;
string str[100005];
int main()
{
    string s;
    vector<char>vc;
    getline(cin,s);
    //getchar();
    int cnt=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ') cnt++;
        else
            str[cnt].push_back(s[i]);
    }
    cnt++;
    bool t1=0,t2=0;
    for(int i=0;i<cnt;i++)
    {
        int l=str[i].size();
            size_t pos1,pos2,pos3,pos4,pos5,pos6;
            pos1=str[i].find("lios");
            pos2=str[i].find("etr");
            pos3=str[i].find("initis");
            pos4=str[i].find("liala");
            pos5=str[i].find("etra");
            pos6=str[i].find("inites");

            if(pos1!=string::npos && pos1==l-4) {vc.push_back('a');t1=1;}
            else if(pos2!=string::npos && pos2==l-3) {vc.push_back('n');t1=1;}
            else if(pos3!=string::npos && pos3==l-6) {vc.push_back('v');t1=1;}

            if(pos4!=string::npos && pos4==l-5) {vc.push_back('a');t2=1;}
            else if(pos5!=string::npos && pos5==l-4) {vc.push_back('n');t2=1;}
            else if(pos6!=string::npos && pos6==l-6) {vc.push_back('v');t2=1;}

    }


    if((t1==1 && t2==1)||(t1==0 && t2==0) || (vc.size()!=cnt) ) cout<<"NO"<<endl;
    else{
        if(vc.size()==1) cout<<"YES"<<endl;
        else
        {
            int sw=0,posi;
            for(int i=0;i<vc.size();i++)
            {
                if(vc[i]=='n')
                {
                    sw++;
                    posi=i;
                }
            }
            if(sw>1) cout<<"NO"<<endl;
            else
            {
                bool test1=0,test2=0;
                for(int i=0;i<posi;i++) if(vc[i]!='a'){
                    test1=1;
                    break;
                }
                for(int i=posi+1;i<vc.size();i++) if(vc[i]!='v'){
                    test2=1;
                    break;
                }

                if(test1==0 && test2==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }

}
