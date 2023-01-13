#include<bits/stdc++.h>
using namespace std;

void arrayinsert(int a[], int n, int p, int item)
{
    for(int j=n; j>=p; j--)
    a[j+1]=a[j];

    a[p]=item;
    n=n+1;
    for(int j=1; j<=n; j++)
        cout<<a[j]<<" ";
}

int main()
{
    int a[50], n, p, j, item;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter position & item : " ;
    cin>>p>>item;

    arrayinsert(a,n,p,item);

    }
