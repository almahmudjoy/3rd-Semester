#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *start=NULL;

void create (int n)
{
    node *newn, *temp;
    for(int i=0; i<n; i++)
    {
        newn=new node;
        cout<<"Enter Data : ";
        cin>>newn->data;
        newn->next=NULL;

        if(start==NULL)
        {
            start=newn;
            temp=start;
        }
        else
        {
            temp->next=newn;
            temp=temp->next;
        }
    }
}

void first_insert()
{
    node *newn=new node;
    int a;
    cout<<"Enter first insert value :";
    cin>>a;
    newn->data=a;
    newn->next=start;
    start=newn;
}
void last_insert()
{
    node *newn=new node;
    int b;
    cout<<"Enter last insert value :";
    cin>>b;
    newn->data=b;
    newn->next=NULL;
    node*temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newn;
}

void  middle_insert()
{
    node *newn=new node;
    int c;
    int pos;
    cout<<"Enter position :";
    cin>>pos;
    cout<<"Enter middle insert value :";
    cin>>c;
    newn->data=c;

    node*temp=start;

    for(int i=1; i<pos-1; i++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next=newn;
}

void display()
{
    node *temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp<<" "<<temp->next<<endl;
        temp=temp->next;
    }
}

int main()
{
    int n;
    cout<<"How many number:";
    cin>>n;
    create(n);
    display();
    cout<<endl;
    first_insert();
    display();
    cout<<endl;
    last_insert();
    display();
    cout<<endl;
    middle_insert();
    display();

}
