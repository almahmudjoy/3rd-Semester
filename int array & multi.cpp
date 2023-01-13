#include<bits/stdc++.h>
using namespace std;

int multiplication(int x[])
{
    int multi=1;
    for(int i=0; i<5; i++)
    {
        multi*=x[i];
    }
    return multi;
}

int main()
{
    int x[10];
    for(int i=0; i<5; i++)
    {
        cin>>x[i];
    }
    cout<<multiplication(x);

}
