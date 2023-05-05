#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;


};
node*start=NULL;
void create(int n)
{
    node*newn;
    node*temp;
    for(int i=0; i<n; i++)
    {
        newn=new node;
        cout<<"\nEnter Data: ";
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
void delfirst()
{
    node*temp=start;
    start=temp->next;
    delete temp;

}
void dellast()
{
    node*temp=start;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
//
    temp->next=NULL;


}
void delany()
{
    int n;
    cout<<"Enter the position u want to delete:";
    cin>>n;

    node*temp=start;
    for(int i=2; i<n; i++)
    {
        if(temp->next!=NULL)
        {
            temp = temp->next;
        }
    }

    temp->next = temp->next->next;


}

void display()
{
    node*temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp<<" "<<temp->next<<endl;
        temp=temp->next;
    }

}

int main()
{
    int n;
    cout<<"enter how many data you want to see:";
    cin>>n;
    create(n);
    display();
    cout<<endl;
    delfirst();
    display();
    cout<<endl;
    dellast();
    display();
    cout<<endl;
    delany();
    display();


}
