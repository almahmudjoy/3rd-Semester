#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=a[i];
        int ptr=i-1;
        while(temp<a[ptr] && ptr>=0)
        {
            a[ptr]=a[ptr-1];
            ptr=ptr-1;
        }
        a[ptr]=temp;
    }

    cout << "Sorted array in ascending order: ";
   for(int i=0; i<n; i++)
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
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);


}


