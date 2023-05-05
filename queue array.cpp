#include<bits/stdc++.h>
using namespace std;

int Queue[100], f = 0, r = 0;
int n,item;

void Insert()
{
    if ((f==1 && r==n)||(f== r+1))
        cout<<"Queue Overflow"<<endl;
    else
    {
        if (f== 0)
        {
            f=r=1;
        }
        else if(r==n)
        {
            r=1;
        }
        else
        {
            r=r+1;
        }
        cout<<"Insert the element in queue : ";
        cin>>item;

        Queue[r] = item;
    }
}

void Delete()
{
    if (f == 0 || f > r)
    {
        cout<<"Queue Underflow ";
        return ;
    }
    else
    {
        item=Queue[f];
        Queue[f]=0;
        if(f==r)
        {
            f=r=0;
        }
        else if(f==n)
        {
            f=1;
        }
        else
        {
            f=f+1;
        }
        cout<<"Element deleted from queue is : "<< item ;

    }
}

void Display()
{
    if (f>r)
    {
        for(int i=f; i<=n; i++)
        {
            cout<<Queue[i];
        }
        for(int i=1; i<=r; i++)
        {
            cout<<Queue[i];
        }
    }

    else
    {
        cout<<"Queue elements are : ";
        for (int i =f ; i <= r; i++)
        {
            //if(Queue[i]!=0)
            cout<<Queue[i]<<" ";

        }


    }
}


int main()
{
    cout<<"Enter data : ";
    cin>>n;
    int ch,item;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    do
    {
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<endl;
            Insert();
            break;
        case 2:
            cout<<endl;
            Delete();
            break;
        case 3:
            cout<<endl;
            Display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    while(ch!=4);
    return 0;
}

