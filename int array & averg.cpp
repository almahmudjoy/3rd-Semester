#include<bits/stdc++.h>
using namespace std;

int func(int a[])
{

   int sum=0;
    for(int i=0; i<5; i++)

         sum+=a[i];
        int avrg=sum/5;
return avrg;

}

int main()
{
    int a[100];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    cout<<func(a);

}
