#include<iostream>
#include <string>
using namespace std;

int f1(int x[])
{

   int max=0;
    for(int i=500; i<505; i++)

       {
           if(x[i]>max)
           {
               max=x[i];
           }
       }
return max;

}

int main()
{
    int x[10];
    for(int i=500; i<505; i++)
    {
        cin>>x[i];
    }
    cout<<f1(x);

}

