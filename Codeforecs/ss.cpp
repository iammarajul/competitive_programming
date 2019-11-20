#include<conio.h>
#include<iostream>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<fstream>
#include<windows.h>
#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
# include<stdio.h>
# include<stdlib.h>
using namespace std;


void clreol()
{

}

void clrscr()
{
    system("clear");
}


void gotoxy(int a,int b)
{
    COORD c;
    c.X=a;
    c.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
class menu
{
public:
    void main_menu(void);

};
class adver
{
public:
    void show()
    {
        clrscr();
        cout<<"\n\t    ************** ELECTRICITY BILLING SYSTEM **************";
        cout<<"\n";
        cout<<"\n\t\t Program Developed By:-   Utkarsh Sharma";
        cout<<"\n\t\t              Branch :-   Computer Engg.";
        cout<<"\n\t\t             Roll No.:-   10092009";
        cout<<"\n\n";
        cout<<"\n\t\t **********UTTAR HARYANA BIJLI UTS LIMITED**********";
        cout<<"\n\t\t **********(A Govt. Of Haryana Undertaking)*********";
        cout<<"\n";
        cout<<"\n\n"<<"************************* SAVE ELECTRICITY, SAVE MONEY *************************";
    }
    void calculation()
    {
        clrscr();
        int rt,unit,nmr,omr;
        float tbill,lastpayment;
        cout<<"\n\n\t\tENTER YOUR OLD METER READING:\t";
        cin>>omr;
        cout<<"\n\n\t\tENTER YOUR NEW METER READING:\t";
        cin>>nmr;
        unit=nmr-omr;
        if(unit<=100)
        {
            rt=1;
        }
        else if(unit>100 && unit<=200)
        {
            rt=2;
        }
        else if(unit>200 && unit<=300)
        {
            rt=3;
        }
        else if(unit>400)
        {
            rt=4;
        }
        cout<<"\n\n\t\tENTER YOUR LAST DUE:\t";
        cin>>lastpayment;
        tbill=(unit*rt)+lastpayment;
        cout<<"\n\n\t\tYOUR BILL IS:\t";
        cout<<tbill;
        _getch();
    }
};
class member
{
public:
    void list(void);
protected:
    void add_mem(int,char[],char[],char[],char[],char[],char[],char[],char[]);
    void modify(int,char[],char[],char[],char[],char[],char[],char[],char[]);
    void deletion(void);
    int member_found(int);
    char *membername(int);
    char *memberfather(int);
    char *memberaddress(int);
    char *memberomr(int);
    char *membernmr(int);
    char *memberunit(int);
    char *memberfree(int);
    char *membercost(int);
    int recordno(int);
    int lastcode(void);
    void display(int);
    void delete_rec(int);
private:
    int memcode;
    char name[12],father[12],address[18],omr[4],nmr[4],unit[4],free[4],cost[4];
};

class working:public member
{
public:
    void add_member(void);
    void modify_member(void);
    void delete_member(void);
};

void menu::main_menu(void)
{
    char ch;
    adver v;
    while(1)
    {
        clrscr();
        gotoxy(29,6);
        v.show();
        cout<<"\n\t\t1.CHECK BY CLACULATIONS";
        cout<<"\n\t\t2.ADD NEW CONSUMER";
        cout<<"\n\t\t3.MODIFICATION IN DETAIL OF CONSUMER";
        cout<<"\n\t\t4.DELETE THE DETAIL OF CONSUMER";
        cout<<"\n\t\t5.CHECK DETAIL'S OF CONSUMER";
        cout<<"\n\t\t0.QUIT";
        cout<<"\n\t\tENTER YOUR CHOICE:\t";
        ch=getche();
        if(ch==27)
            break;
        else if(ch=='1')
        {
            adver v;
            v.calculation();

        }
        else if(ch=='2')
        {
            working w;
            w.add_member();

        }
        else if(ch=='3')
        {
            working w;
            w.modify_member();
        }
        else if(ch=='4')
        {
            working w;
            w.delete_member();
        }
        else if(ch=='5')
        {

            member m;
            m.list();
        }
        else if(ch=='0')
            break;

    }

}


int member :: member_found(int mcode)
{
    fstream file;
    file.open("member.dat",ios::in);
    file.seekg(0,ios ::beg);
    int found=0;
    while(file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            found=1;
            break;
        }
    }
    file.close();
    return found;
}

int member :: lastcode(void)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    int mcode = 0;
    while(file.read((char*) this, sizeof(member)))
        mcode=memcode;
    file.close();
    return mcode;
}

char *member :: membername(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char mname[12];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(mname,name);
            break;
        }
    }
    file.close();
    return mname;
}

char* member :: memberfather(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char mfather[12];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(mfather,father);
            break;
        }
    }
    file.close();
    return mfather;
}

char* member::memberaddress(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char maddress[18];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(maddress,address);
            break;
        }
    }
    file.close();
    return maddress;
}

char* member::memberomr(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char momr[4];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(momr,omr);
            break;
        }
    }
    file.close();
    return momr;
}

char* member::membernmr(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char mnmr[4];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(mnmr,nmr);
            break;
        }
    }
    file.close();
    return mnmr;
}

char* member::memberunit(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char munit[4];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(munit,unit);
            break;
        }
    }
    file.close();
    return munit;
}

char* member::memberfree(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char mfree[4];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(mfree,free);
            break;
        }
    }
    file.close();
    return mfree;
}

char* member::membercost(int mcode)
{
    fstream file;
    file.open("member.dat", ios::in);
    file.seekg(0,ios::beg);
    char mcost[4];
    while (file.read((char*) this, sizeof(member)))
    {
        if(memcode == mcode)
        {
            strcpy(mcost,cost);
            break;
        }
    }
    file.close();
    return mcost;
}

int member :: recordno(int mcode)
{
    fstream file;
    file.open("member.dat",ios::in);
    file.seekg(0,ios::beg);
    int count=0;
    while(file.read((char*) this, sizeof(member)))
    {
        count++;
        if(memcode==mcode)
            break;
    }
    file.close();
    return count;
}

void member :: delete_rec(int mcode)
{
    fstream file;
    file.open("member.dat",ios::in);
    fstream temp;
    temp.open("temp.dat",ios::out);
    file.seekg(0,ios::beg);
    while(!file.eof())
    {
        file.read((char*) this, sizeof (member));
        if (file.eof())
            break;
        if(memcode!=mcode)
            temp.write((char*)this, sizeof(member));
    }
    file.close();
    temp.close();
    file.open("member.dat", ios::out);
    temp.open("temp.dat", ios::in);
    temp.seekg(0,ios::beg);
    while(!temp.eof())
    {
        temp.read((char*) this, sizeof(member));
        if(temp.eof())
            break;
        file.write((char*) this, sizeof(member));
    }
    file.close();
    temp.close();
}

void member:: modify(int mcode, char mname[8],char mfather[8],char maddress[12],char momr[4],char mnmr[4],char munit[4],char mfree[4],char mcost[4])
{
    int recno;
    recno = recordno(mcode);
    fstream file;
    file.open("member.dat", ios::out | ios :: ate);
    strcpy(name,mname);
    strcpy(father,mfather);
    strcpy(address,maddress);
    strcpy(omr,momr);
    strcpy(nmr,mnmr);
    strcpy(unit,munit);
    strcpy(free,mfree);
    strcpy(cost,mcost);
    int location;
    location=(recno-1)*sizeof(member);
    file.seekp(location);
    file.write((char*)this, sizeof(member));
    file.close();
}

void member::add_mem(int mcode,char mname[8],char mfather[8],char maddress[12],char momr[4],char mnmr[4],char munit[4],char mfree[4],char mcost[4])
{
    fstream file;
    file.open("member.dat", ios::app);
    memcode=mcode;
    strcpy(name,mname);
    strcpy(father,mfather);
    strcpy(address,maddress);
    strcpy(omr,momr);
    strcpy(nmr,mnmr);
    strcpy(unit,munit);
    strcpy(free,mfree);
    strcpy(cost,mcost);
    file.write((char*)this, sizeof(member));
    file.close();
}

void member::display(int mcode)
{
    fstream file;
    file.open("member.dat",ios::in);
    file.seekg(0,ios::beg);
    while(file.read((char*)this, sizeof(member)))
    {
        if(memcode==mcode)
        {
            gotoxy(5,3);
            cout<<"METER NO.  #"<<mcode;
            gotoxy(5,4);
            cout<<"Name  #"<<name;
            gotoxy(5,6);
            cout<<"Father Name  #"<<father;
            gotoxy(5,7);
            cout<<"Address  #"<<address;
            gotoxy(5,8);
            cout<<"OMR #"<<omr;
            gotoxy(5,9);
            cout<<"NMR  #"<<nmr;
            gotoxy(5,10);
            cout<<"UNIT #"<<unit;
            gotoxy(5,11);
            cout<<"Free  #"<<free;
            gotoxy(5,12);
            cout<<"COST #"<<cost;
            break;
        }
        file.close();
    }
}

void member :: list(void)
{
    clrscr();
    int row =8,found=0,flag=0;
    char ch;
    member m;
    gotoxy(31,1);
    cout<<"LIST OF CONSUMER'S";
    gotoxy(31,2);
    cout<<"~~~~~~~~~~~~~~~~~";

    gotoxy(1,5);
    cout<<"M NO.";
    gotoxy(7,5);
    cout<<"NAME";
    gotoxy(20,5);
    cout<<"FATHER NAME";
    gotoxy(33,5);
    cout<<"ADDRESS";
    gotoxy(52,5);
    cout<<"OMR";
    gotoxy(57,5);
    cout<<"NMR";
    gotoxy(62,5);
    cout<<"UNIT";
    gotoxy(67,5);
    cout<<"FREE";
    gotoxy(72,5);
    cout<<"COST";

    gotoxy(1,6);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    fstream file;
    file.open("member.dat",ios::in);
    file.seekg(0,ios::beg);
    while(file.read((char*)this, sizeof(member)))
    {
        flag=0;
        delay(20);
        found=1;
        gotoxy(1,row);
        cout<<memcode;
        gotoxy(7,row);
        cout<<name;
        gotoxy(20,row);
        cout<<father;
        gotoxy(33,row);
        cout<<address;
        gotoxy(52,row);
        cout<<omr;
        gotoxy(57,row);
        cout<<nmr;
        gotoxy(62,row);
        cout<<unit;
        gotoxy(67,row);
        cout<<free;
        gotoxy(73,row);
        cout<<cost;

        gotoxy(19,row+1);
        if(memcode==0)
            printf("MEMBER NAME:(Not Found)");
        if(row==22)
        {
            flag=1;
            row=6;
            gotoxy(1,25);
            cout<<"Press any key to continue or press<esc> to exit";
            ch=getch();
            if(ch==27)
                break;
            clrscr();
            gotoxy(32,2);
            cout<<"LIST OF MEMBERS";
            gotoxy(31,3);
            cout<<"~~~~~~~~~~~~~~~~~";
            gotoxy(1,4);
            cout<<"CODE    NAME    FATHER NAME    ADDRESS      OMR      NMR    UNIT    FREE    COST";
            gotoxy(1,5);
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        }
        else
            row=row+2;
    }
    getch();
    if(!found)
    {
        gotoxy(5,10);
        cout<<"\7 Records not Found";
    }
    if(!flag)
    {
        gotoxy(1,25);
        cout<<"Pess Any Key to Continue...";
        _getche();
    }
    file.close();
}
void working:: add_member(void)
{
    char ch;
    int mcode;
    char mname[12],mfather[12],maddress[18],momr[4],mnmr[4],munit[4],mfree[4],mcost[4];
    mcode=lastcode();
    mcode++;
    do
    {
        int valid=0;
        clrscr();
        gotoxy(28,3);
        cout<<"ADDITION OF THE TRAVELLERS";
        gotoxy(72,1);
        cout<<"<0>=exit";;
        gotoxy(5,6);
        cout<<"Meter No. #"<<mcode;
        gotoxy(5,8);
        cout<<"Name :";
        gotoxy(5,10);
        cout<<"Father Name:";
        gotoxy(5,12);
        cout<<"Address :";
        gotoxy(5,14);
        cout<<"OMR:";
        gotoxy(5,16);
        cout<<"NMR :";
        gotoxy(5,18);
        cout<<"UNIT:";
        gotoxy(5,20);
        cout<<"FREE :";
        gotoxy(5,22);
        cout<<"COST:";

        do
        {
            valid=1;
            gotoxy(5,25);//clreol();
            cout<<"enter of the name of the new CONSUMER";
            gotoxy(15,8);//clreol();
            gets(mname);
            //strupr(mname);
            if(mname[0]=='0')
                return;
            if(strlen(mname)<1 || strlen(mname)>12)
            {
                valid =0;
                gotoxy(5,25);//clreol();
                cout<<"\n Enter correctly(range: 1..12)";
                getch();
            }
        }
        while(!valid);
        do
        {
            valid =1;
            gotoxy(5,25);//clreol();
            cout<<"Enter FATHER NAME of the CONSUMER or press<enter> for none";
            gotoxy(18,10);//clreol();
            gets(mfather);
            if(mfather[0]=='0')
                return;
            if((strlen(mfather)<2 && strlen(mfather)>0)||(strlen(mfather)>12))
            {
                valid=0;
                gotoxy(5,25);//clreol();
                cout<<"\n enter correctly (range 1 .........12)";
                getch();
            }
        }
        while(!valid);
        if(strlen(mfather)==0)
            strcpy(mfather,"");
        do
        {
            valid=1;
            gotoxy(5,25);//clreol();
            cout<<"Enter the address of the new member";
            gotoxy(15,12);//clreol();
            gets(maddress);
//            struct(maddress);
            if(maddress[0]=='0')
                return;
            if(strlen(maddress)<1 || strlen(maddress)>18)
            {
                valid=0;
                gotoxy(5,25); //clreol();
                cout<<"\n Enter correctly (range: 1 to 18)";
                getch();
            }
        }
        while(!valid);
        //gotoxy(5,25);
        //clreol();
        do
        {
            valid=1;
            gotoxy(5,25);//clreol();
            cout<<"Enter the OMR of the new CONSUMER";
            gotoxy(15,14);//clreol();
            gets(momr);
            //strupr(momr);
            if(momr[0]=='0')
                return;
            if(strlen(momr)<1 || strlen(momr)>4)
            {
                valid=0;
                gotoxy(5,25); //clreol();
                cout<<"\n Enter correctly (range: 1 to 4)";
                getch();
            }
        }
        while(!valid);
        //gotoxy(5,25);
        //clreol();
        do
        {
            valid=1;
            gotoxy(5,25);//clreol();
            cout<<"Enter the NMR of the new CONSUMER";
            gotoxy(15,16);//clreol();
            gets(mnmr);
            //strupr(mnmr);
            if(mnmr[0]=='0')
                return;
            if(strlen(mnmr)<1 || strlen(mnmr)>4)
            {
                valid=0;
                gotoxy(5,25); //clreol();
                cout<<"\n Enter correctly (range: 1 to 4)";
                _getch();
            }
        }
        while(!valid);
        //gotoxy(5,25);
        //clreol();
        do
        {
            valid=1;
            gotoxy(5,25);//clreol();
            cout<<"Enter the UNIT of the new CONSUMER";
            gotoxy(15,18);//clreol();
            gets(munit);
            //strupr(munit);
            if(munit[0]=='0')
                return;
            if(strlen(munit)<1 || strlen(munit)>4)
            {
                valid=0;
                gotoxy(5,25); //clreol();
                cout<<"\n Enter correctly (range: 1 to 4)";
                getch();
            }
        }
        while(!valid);
        //gotoxy(5,25);
        //clreol();
        do
        {
            valid=1;
            gotoxy(5,25);//clreol();
            cout<<"Enter the FREE UNIT of the new CONSUMER";
            gotoxy(15,20);//clreol();
            gets(mfree);
            // strupr(mfree);
            if(mfree[0]=='0')
                return;
            if(strlen(mfree)<1 || strlen(mfree)>4)
            {
                valid=0;
                gotoxy(5,25);// clreol();
                cout<<"\n Enter correctly (range: 1 to 4)";
                getch();
            }
        }
        while(!valid);
        //gotoxy(5,25);
        //clreol();
        do
        {
            valid=1;
            gotoxy(5,25);//clreol();
            cout<<"Enter the COST of the new CONSUMER";
            gotoxy(15,22);//clreol();
            gets(mcost);
            //strupr(mcost);
            if(mcost[0]=='0')
                return;
            if(strlen(mcost)<1 || strlen(mcost)>4)
            {
                valid=0;
                gotoxy(5,25);// clreol();
                cout<<"\n Enter correctly (range: 1 to 4)";
                _getch();
            }
        }
        while(!valid);
        gotoxy(5,25);//clreol();
        do
        {
            gotoxy(5,25);//clreol();
            cout<<"Do you want to save(y/n):";
            ch=getche();
            ch=toupper(ch);
            if(ch =='0')
                return;
        }
        while(ch!='Y' && ch!='N');
        if(ch=='Y')
        {
            add_mem(mcode,mname,mfather,maddress,momr,mnmr,munit,mfree,mcost);
            mcode++;
        }
        do
        {
            gotoxy(5,30);//clreol();
            cout<<"Do you want to add more(y/n)";
            ch=getche();
            ch=toupper(ch);
            if(ch=='0')
                return;
        }
        while(ch!='Y' && ch!='N');
    }
    while(ch=='Y');
}


void working:: modify_member(void)
{
    member m;
    char m1code[10],mname[12],mfather[12],maddress[18],momr[4],mnmr[4],munit[4],mfree[4],mcost[4],ch;
    int m2code=0,mcode=0;
    int valid;
    do
    {
        valid=1;
        while(1)
        {
            //clrscr();
            gotoxy(72,1);
            cout<<"<0>=exit";
            gotoxy(5,7);
            cout<<"Enter code no of the CONSUMER to modify";
            gotoxy(5,8);
            cout<<"    or";
            gotoxy(5,9);
            cout<<"Press<enter for help";
            gets(m1code);
            m2code=atoi(m1code);
            mcode=m2code;
            if(m1code[0]=='0')
                return;
            if(strlen(m1code)==0)
                m.list();
            else
                break;
        }
        if(mcode==0)
        {
            valid =0;
            gotoxy(5,25);
            cout<<"\7Enter correctly";
            _getch();
        }
        if(valid && !member_found(mcode))
        {
            valid=0;
            gotoxy(5,13);
            cout<<"\n Record not found";
            gotoxy(5,14);
            cout<<"Press<Esc> to exit or any other key to continue...";
            ch=getch();
            if(ch==27)
                return;
        }
    }
    while(!valid);
    //clrscr();
    gotoxy(72,1);
    cout<<"<0>=exit";
    member::display(mcode);
    do
    {
        gotoxy(5,14);//clreol();
        cout<<"Do you want to MODIFY this record(y/n):";
        ch=getche();
        ch=toupper(ch);
        if(ch=='0')
            return;
    }
    while(ch!='Y' && ch!='N');
    if(ch=='N')
        return;
    gotoxy(5,16);
    cout<<"name:";
    gotoxy(5,17);
    cout<<"father name:";
    gotoxy(5,18);
    cout<<"Address:";
    gotoxy(5,19);
    cout<<"OMR:";
    gotoxy(5,20);
    cout<<"NMR:";
    gotoxy(5,21);
    cout<<"UNIT:";
    gotoxy(5,22);
    cout<<"FREE:";
    gotoxy(5,23);
    cout<<"COST:";

    do
    {
        valid=1;
        gotoxy(5,25);//clreol();
        cout<<"enter the name of the CONSUMER or<enter>for no change";
        gotoxy(19,16);//clreol();
        gets(mname);
        //strupr(mname);
        if(mname[0]=='0')
            return;
        if(strlen(mname)>12)
        {
            valid=0;
            gotoxy(5,25);//clreol();
            cout<<"\n Enter correctly (range: 1..12)";
            getch();
        }
    }
    while(!valid);
    if(strlen(mname)==0)
        strcpy(mname,membername(mcode));
    do
    {
        valid=1;
        gotoxy(5,25);//clreol();
        cout<<"Enter the FATHER NAME of CONSUMER or <enter> for no change";
        gotoxy(19,17);//clreol();
        gets(mfather);
        if(mfather[0]=='0')
            return;
        if((strlen(mfather)<2 && strlen(mfather)>0) || (strlen(mfather)>12))
        {
            valid=0;
            gotoxy(5,25);//clreol();
            cout<<"\n Enter correctly (1....12)";
            getch();
        }
    }
    while(!valid);
    if(strlen(mfather)==0)
        strcpy(mfather,memberfather(mcode));
    do
    {
        valid=1;
        gotoxy(5,25);//clreol();
        cout<<"Enter the Address of the CONSUMER or <enter> for no change:";
        gotoxy(19,18);//clreol();
        gets(maddress);
        //strupr(maddress);
        if(maddress[0]=='0')
            return;
        if(strlen(maddress)>18)
        {
            valid=0;
            gotoxy(5,25);//clreol();
            cout<<"\n Enter Correctly (range 1 to 18)";
            getch();
        }
    }
    while(!valid);
    if(strlen(maddress)==0)
        strcpy(maddress,memberaddress(mcode));
    gotoxy(5,25);
    //clreol();
    do
    {
        valid=1;
        gotoxy(5,26);
        //clreol();
        cout<<"Enter the OMR of the CONSUMER or <enter> for no change:";
        gotoxy(19,19);
        //clreol();
        gets(momr);
        //strupr(momr);
        if(momr[0]=='0')
            return;
        if(strlen(momr)>4)
        {
            valid=0;
            gotoxy(5,25);//clreol();
            cout<<"\n Enter Correctly (range 1 to 4)";
            _getch();
        }
    }
    while(!valid);
    if(strlen(momr)==0)
        strcpy(momr,memberomr(mcode));
    gotoxy(5,25);
    //clreol();
    do
    {
        valid=1;
        gotoxy(5,25);
        //clreol();
        cout<<"Enter the NEW METER READING of the CONSUMER or <enter> for no change:";
        gotoxy(19,20);//clreol();
        gets(mnmr);
        //strupr(mnmr);
        if(mnmr[0]=='0')
            return;
        if(strlen(mnmr)>4)
        {
            valid=0;
            gotoxy(5,25);//clreol();
            cout<<"\n Enter Correctly (range 1 to 4)";
            getch();
        }
    }
    while(!valid);
    if(strlen(mnmr)==0)
        strcpy(mnmr,membernmr(mcode));
    gotoxy(5,25);//clreol();
    do
    {
        valid=1;
        gotoxy(5,25);//clreol();
        cout<<"Enter the UNIT CONSUME BY the CONSUMER or <enter> for no change:";
        gotoxy(19,21);
        clreol();
        gets(munit);
        //strupr(munit);
        if(munit[0]=='0')
            return;
        if(strlen(munit)>4)
        {
            valid=0;
            gotoxy(5,25);
            clreol();
            cout<<"\n Enter Correctly (range 1 to 4)";
            getch();
        }
    }
    while(!valid);
    if(strlen(munit)==0)
        strcpy(munit,memberunit(mcode));
    gotoxy(5,25);
    clreol();
    do
    {
        valid=1;
        //gotoxy(5,26);
        clreol();
        cout<<"Enter the FREE UNIT of the CONSUMER or <enter> for no change:";
        gotoxy(19,22);
        clreol();
        gets(mfree);
        //strupr(mfree);
        if(mfree[0]=='0')
            return;
        if(strlen(mfree)>4)
        {
            valid=0;
            gotoxy(5,25);
            clreol();
            cout<<"\n Enter Correctly (range 1 to 4)";
            getch();
        }
    }
    while(!valid);
    if(strlen(mfree)==0)
        strcpy(mfree,memberfree(mcode));
    gotoxy(5,25);
    clreol();
    do
    {
        valid=1;
        //gotoxy(5,25);
        clreol();
        cout<<"Enter the COST of the CONSUMER or <enter> for no change:";
        gotoxy(19,23);
        clreol();
        gets(mcost);
//                strupr(mcost);
        if(mcost[0]=='0')
            return;
        if(strlen(mcost)>4)
        {
            valid=0;
            gotoxy(5,25);
            clreol();
            cout<<"\n Enter Correctly (range 1 to 4)";
            getch();
        }
    }
    while(!valid);
    if(strlen(mcost)==0)
        strcpy(mcost,membercost(mcode));
    gotoxy(5,25);
    clreol();
    do
    {
        gotoxy(5,28);
        clreol();
        cout<<"do you want to save the changes(y/n)";
        ch=getche();
        ch=toupper(ch);
        if(ch=='0')
            return;
    }
    while(ch!= 'Y' && ch!='N');
    if(ch=='N')
        return;
    member::modify(mcode,mname,mfather,maddress,momr,mnmr,munit,mfree,mcost);
    gotoxy(5,23);
    cout<<"\n Record modified";
    getch();
}
void working::delete_member(void)
{
    member m;
    char m1code[5],mname[12],mfather[12],maddress[18],momr[4],mnmr[4],munit[4],mfree[4],mcost[4],ch;
    int m2code=0,mcode=0;
    int valid;
    do
    {
        valid=1;
        while(1)
        {
            clrscr();
            gotoxy(72,1);
            cout<<"<0>=exit";
            gotoxy(5,5);
            cout<<"Enter METER No. of the member to be  deleted";
            gotoxy(5,7);
            cout<<"        or    ";
            gotoxy(5,9);
            cout<<"Press<enter>for help";
            gets(m1code);
            m2code=atoi(m1code);
            mcode=m2code;
            if(m1code[0]=='0')
                return;
            if(strlen(m1code)==0)
                m.list();
            else
                break;
        }
        if(mcode==0)
        {
            valid=0;
            gotoxy(5,25);
            cout<<"\n Enter Correctly";
            getch();
        }
        if(valid && !member_found(mcode))
        {
            valid=0;
            gotoxy(5,13);
            cout<<"Record not Found";
            gotoxy(5,14);
            cout<<"Press <esc> to exit or any other key to continue....";
            ch=getch();
            if(ch==27)
                return;
        }
    }
    while(!valid);
    clrscr();
    gotoxy(72,1);
    cout<<"<0> Exit";
    member::display(mcode);
    do
    {
        gotoxy(5,14);
        clreol();
        cout<<"DO you want to delete this record(y/n)";
        ch=getche();
        ch=toupper(ch);
        if(ch=='0')
            return;
    }
    while(ch!= 'Y' && ch!='N');
    if(ch=='N')
        return;
    member::delete_rec(mcode);
    gotoxy(5,23);
    cout<<"\n Record Modified";
    _getch();
}

int main(void)
{
    menu menu;
    menu.main_menu();
}
