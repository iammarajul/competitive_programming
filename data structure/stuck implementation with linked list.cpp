#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;



void push(int x)
{
    node* temp;
    temp=new node();

    temp->data=x;


    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node* temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;

    }
}


void pop()
{

    if(head==NULL)
    {
        cout<<"Stuck is Empty!! :( :( Cann't Pop"<<endl;
    }
    else
    {

        node* temp;
        temp=head;
        node* p=head;
        while(1)
        {
            p=temp->next;

            if(p->next==NULL)
            {
                temp->next=NULL;
                delete(p);
                break;

            }
            temp=temp->next;
        }
    }

}



void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    int number;
    pop();
    /*
    push(1);
    push(5);
    push(6);
    push(9);
    push(10);
    print();

    //pop();
    print();*/
}
