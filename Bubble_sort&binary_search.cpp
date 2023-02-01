#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int Array[], int n )
{
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(Array[j]>Array[j+1])
            {
                int temp=Array[j];
                Array[j]=Array[j+1];
                Array[j+1]=temp;
            }
        }
    }

    cout<<"Sorted array :";
    for(int i=1; i<=n; i++)
    {

        cout<<" "<<Array[i];
    }
}


void Binary_Search(int Array[],int n)
{
    cout<<endl;
    cout<<"Enter the value you want to search : ";
    int item;
    cin>>item;
    int beg=1;
    int End=n;
    int mid=(End+beg)/2;
    while(beg<=End && Array[mid]!=item)
    {
        if(item<Array[mid])
        {
            End=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(End+beg)/2;
    }
    cout<<"Value Position :"<<mid<<endl;
}


int main()
{
    cout<<"Enter Array Size : ";
    int n;
    cin>>n;
    int Array[n];
    cout<<"Enter Array : ";
    for(int i=1; i<=n; i++)
    {
        cin>>Array[i];
    }
    Bubble_Sort(Array,n);
    Binary_Search(Array,n);

}
