#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node (int x)
    {
        data= x;
        left=NULL;
        right=NULL;
    }
};


void Insert(node *node1, int x)
{
    if(x<node1-> data)
    {
        if(node1->left==NULL)
            node1->left=new node(x);
        else
            Insert(node1->left,x);

    }
    else
    {
        if(node1->right==NULL)
            node1->right=new node(x);
        else
            Insert(node1->right,x);
    }


}

void inorder(node *root)
{
    if(root==NULL)
    {

    }
    else
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}


void preorder(node *root)
{
    if(root==NULL)
    {

    }
    else
    {
        cout << root-> data<< " ";
        preorder(root->left);
        preorder(root->right);
    }

}


void postorder(node *root)
{
    if(root==NULL)
    {

    }
    else
    {

        postorder(root->left);
        postorder(root->right);
        cout << root-> data<< " ";
    }

}


int main()
{

    int a;
    cout<<"How many data : ";
    cin>>a;
int x;
    node *root=NULL;
    for(int i=0; i<a; i++)
    {
        cin>>x;
        if(root==NULL)
        {
           root=new node(x);

        }
        else
        {
            Insert(root,x);
        }
    }
    cout<<"Inorder Data : ";
    inorder(root);
    cout<<endl;
    cout<<"preorder Data : ";
    preorder(root);
    cout<<endl;
    cout<<"postorder Data : ";
    postorder(root);
    cout<<endl;

}
