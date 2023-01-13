#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void arraydel(int Array[],int Size)
{
    int j, position;
    cout<<"\nEnter the position to be deleted an item : ";
    cin>>position;
    for(j=position; j<Size-1; j++)
    {
        Array[j]=Array[j+1];
    }
    Size=Size-1;
    cout<<endl;
    cout<<"Array Size : "<<Size<<endl;
    cout<<"\nArray elements are : ";
    for(int i=0; i<Size; i++)
    {
        cout<<" "<<Array[i];
    }

}

int main()
{
    int Size,i;
    cout<<"Enter the size of array : ";
    cin>>Size;
    int Array[Size];
    cout<<endl;
    cout<<"Input the array elements : ";
    for(i=0; i<Size; i++)
    {
        cin>>Array[i];
    }
    arraydel(Array,Size);
   getch();
}
