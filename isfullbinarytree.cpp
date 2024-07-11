//Full binary tree
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree{
    public:
    Node *root=NULL;
    Node *create_node_and_insert(Node *root,int val){
        if(root==NULL){
            return new Node(val);
        }
        else if(val<root->data){
            root->left=create_node_and_insert(root->left,val);
        }
        else{
            root->right=create_node_and_insert(root->right,val);
        }
        return root;
    }
    
    void insert(int val){
        root=create_node_and_insert(root,val);
    }
    
    void post(){
        post_order(root);
    }
    
    void pre(){
        pre_order(root);
    }
    
    void in(){
        in_order(root);
    }
    
    void post_order(Node *root){
        if(root == NULL){
            return;
        }
        
        post_order(root->left);
        post_order(root->right);
        cout << root->data << " ";
        return;
    }
    
    void in_order(Node *root){
        if(root == NULL){
            return;
        }
        in_order(root->left);
        cout << root->data << " ";
        in_order(root->right);
        return;
    }
    
    void pre_order(Node *root){
        if(root == NULL){
            return;
        }
        cout << root->data << " ";
        pre_order(root->left);
        pre_order(root->right);
        return;
    }
    
    void LO(){
        queue<Node *> q;
        Level_order(root,q);
    }
    
    void Level_order(Node *root,queue<Node *> q){
        q.push(root);
        while(!(q.empty())){
            int qsize=q.size();
            for(int i=0;i<qsize;i++){
                Node *nd=q.front();
                cout<<nd->data<<" ";
                if(nd->left){
                    q.push(nd->left);
                }
                if(nd->right){
                    q.push(nd->right);
                }
                q.pop();
            }
            cout<<"\n";
        }
            
    }
    
    bool isFull(){
        queue<Node *> q;
        return isFull_BST(root,q);
    }
    
    bool isFull_BST(Node *root,queue<Node *> q){
        q.push(root);
        while(!(q.empty())){
            int qsize=q.size();
            for(int i=0;i<qsize;i++){
                Node *nd=q.front();
                if((nd->left !=NULL && nd->right==NULL) ||(nd->left==NULL && nd->right!=NULL)){
                    return false;
                }
                if(nd->left){
                    q.push(nd->left);
                }
                if(nd->right){
                    q.push(nd->right);
                }
                q.pop();
            }
            
        }
        return true;
    }
};


int main()
{
    int t,n,a,i;
    cin>>t;
    while(t--){
        Tree BST;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            BST.insert(a);
        }
        if(BST.isFull()){
            cout<<"True"<<endl;
        }
        else
            cout<<"False"<<endl;
    }
    return 0;
}





