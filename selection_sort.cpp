#include<bits/stdc++.h>
using namespace std;

int Minimum(int a[],int i,int n)

{
    int Min=a[i];
    int l=i;
    for(int j=i+1; j<=n; j++)
    {
        if(Min>a[j])
        {
            Min=a[j];

            l=j;
        }
    }
    return l;

}

void selection_sort(int a[], int n)
{
    for(int i=1; i<=n-1; i++)
    {
        int loc=Minimum(a,i,n);
        {
            int temp=a[loc];
            a[loc]=a[i];
            a[i]=temp;
        }
    }
    cout<<"array :";
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

}


int main()
{
    cout<<"Enter array size : ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter element : ";
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);

}

