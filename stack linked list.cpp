#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* prev;
    node(int n)
    {
        data= n;
        prev= NULL;
    }
};
node* tail= NULL;
int n;
int check=0;

void push(int elem)
{
    check++;
    if(check>n)
    {
        cout<<"Stack overflow."<<endl;
        check--;
        return;
    }
    node* neww= new node(elem);
    neww->prev= tail;
    tail= neww;
}

void pop()
{
    check--;
    if(check<0)
    {
        cout<<"Stack underflow." <<endl;
        tail=NULL;
        check=0;
        return;
    }
    node* temp= tail;
    tail= tail->prev;
    delete temp;
}





void display()
{
    if(check==0)
    {
        cout<<"Stack empty."<<endl;
        return;
    }
    node* temp= tail;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp= temp->prev;
    }
}
int main()
{
    int nn;
    cin>>nn;
    n=nn;
    int item,op;

    do
    {
        cout<<"1) Push in stack"<<endl;
        cout<<"2) Pop from stack"<<endl;
        cout<<"3) Display stack"<<endl;
        cout<<"4) Exit"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>op;
        switch(op)
        {
        case 1:
        {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>item;
            push(item);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            cout<<endl;
            break;
        }
        case 4:
        {
            cout<<"Exit"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Item"<<endl;
        }
        }
    }
    while(op!=4);
    return 0;
}
