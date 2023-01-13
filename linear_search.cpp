#include<bits/stdc++.h>
using namespace std;

void linear_search(int aray[],int pos,int value,int i)

{
    int x=0;
    for (i=0; i<5; i++)
        if(aray[i]==value)
        {
            x=1;
            cout<<"data found"<<" "<<i+1;
            break;
        }

    if(x==0)
    {
        cout<<"data not found"<<endl;
    }

}
int main()
{
    int aray[5],pos=-1,i;
    for(i=0; i<5; i++)
        cin>>aray[i];
    int value;
    cin>>value;

    linear_search(aray,pos,value,i);
}
