#include<bits/stdc++.h>
using namespace std;

char st[100], top=0, maxstk=5;

void push(char item)
{
    if(top==maxstk)
    {
        cout<<"Overflow occure"<<endl;
    }
    else
    {
        top=top+1;
        st[top]=item;
    }
}

void pop()
{
    if(top==0)
    {
        cout<<"Underflow occure"<<endl;
    }
    else
    {
        //item=st[top];
        top=top-1;
    }
}

void display()
{
    if(top==0)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        for(int i=1; i<=top; i++)
        {
            cout<<st[i]<<" ";
        }
    }
}

int main()
{
    char item;
    int op;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Exit"<<endl;
    do
    {
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


