#include<iostream>
using namespace std;
struct node{
int key;
node*l;
node*r;
node(int k){
key=k;
l=NULL;
r=NULL;
}
};
struct node*insert(struct node*root,int key){
if(root==NULL){
root=new node(key);
}
else if(key>root->key){
root->r=insert(root->r,key);
}
else if(key<=root->key){
root->l=insert(root->l,key);
}
return root;
}
struct node*search(struct node*root,int key){
if(root==NULL || root->key==key){
return root;
}
else if(key>root->key){
return search(root->r,key);
}
else if(key<=root->key){
return search(root->l,key);
}
return NULL;
}
struct node*del(struct node*root,int key){
if(root==NULL){
return root;
}
else if(key>root->key){
root->r=del(root->r,key);
}
else if(key<root->key){
root->l=del(root->l,key);
}
else if(root->r!=NULL && root->l!=NULL){
struct node*s;
s=root->r;
while(s->l!=NULL){
s=s->l;
}
root->key=s->key;
root->r=del(root->r,s->key);
}
else{
if(root->r!=NULL){
return root->r;
}
else{
return root->l;
}
}
return root;
}
void preorder(struct node*root){
if(root==NULL){
return;
}
cout<<root->key<<" ";
preorder(root->l);
preorder(root->r);
}
void postorder(struct node*root){
if(root==NULL){
return;
}
postorder(root->l);
postorder(root->r);
cout<<root->key<<" ";
}
void inorder(struct node*root){
if(root==NULL){
return;
}
inorder(root->l);
cout<<root->key<<" ";
inorder(root->r);
}
struct node*root=NULL;
int main(){
root=insert(root,8);
root=insert(root,3);
root=insert(root,1);
root=insert(root,6);
root=insert(root,10);
root=insert(root,2);
root=insert(root,4);
cout<<"preorder is";
preorder(root);
cout<<endl;
cout<<"postorder is";
postorder(root);
cout<<endl;
cout<<"inorder is";
inorder(root);
struct node*ptr;
ptr=search(root,45);
if(ptr==NULL){
cout<<"key not found";
}
else{
cout<<"key found";
}
del(root,8);
cout<<"preorder is";
cout<<endl;
preorder(root);
}
