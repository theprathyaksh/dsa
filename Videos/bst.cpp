#include<iostream>
using namespace std;
struct node{
int key;
node *r;
node *l;
node(int a){
key=a;
r=NULL;
l=NULL;
}
};
struct node*root=NULL;
struct node*insert(struct node*root,int key){
if(root==NULL){
root=new node(key);
}
else if(key<root->key){
root->l=insert(root->l,key);
}
else if(key>=root->key){
root->r=insert(root->r,key);
}
return root;
}
void preorder(struct node*root){
if(root==NULL){
return;
}
cout<<root->key;
cout<<endl;
preorder(root->l);
preorder(root->r);
}
void inorder(struct node*root){
if(root==NULL){
return;
}
inorder(root->l);
cout<<root->key;
cout<<endl;
inorder(root->r);
}
void postorder(struct node*root){
if(root==NULL){
return;
}
postorder(root->l);
postorder(root->r);
cout<<root->key;
cout<<endl;
}

struct node*search(struct node*root,int key){
if(root==NULL||key==root->key){
return root;
}
else if(key>root->key){
return search(root->r,key);
}
else if(key<root->key){
return search(root->l,key);
}
return NULL;
}
int main(){
int n;
struct node*ptr;
root=insert(root,8);
root=insert(root,3);
root=insert(root,10);
root=insert(root,1);
root=insert(root,6);
root=insert(root,4);
cout<<"preorder is";
preorder(root);
cout<<"postorder is";
postorder(root);
cout<<"inorder is";
inorder(root);
cin>>n;
ptr=search(root,n);
cout<<endl;
if(ptr==NULL){
cout<<"element not found";
}
else{
cout<<"element  found";
}
root=insert(root,9);
cout<<"preorder is";
inorder(root);
}
