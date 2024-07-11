//Heigth of Tree
#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int value)
  {
      data=value;
      left=NULL;
      right=NULL;
  }
};
class Tree
{
  public:
  Node* root=NULL;
   void insert(int value)
  {
      root=create_node_insert(root,value);
  }
  Node* create_node_insert(Node* root,int value)
  {
      if(root==NULL)
      {
          return new Node(value);
      }
      else if(value<root->data)
      {
          root->left=create_node_insert(root->left,value);
      }
      else{
          root->right=create_node_insert(root->right,value);
      }
      return root;
  }
  int find_height()
  {
      int a=fh(root);
      return a;
  }
  int fh(Node* root)
  {
      int lh=0,rh=0;
      if(root==NULL)
      {
          return 0;
      }
      else{
          lh=fh(root->left);
          rh=fh(root->right);
      }
      if(lh>rh)
      {
          return lh+1;
      }
      else{
          return rh+1;
      }
  }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        Tree* bst=new Tree();
        while(n--)
        {
            cin>>a;
            bst->insert(a);
        }
        int height;
        height=bst->find_height();
        cout<<height-1<<endl;
    }
}
