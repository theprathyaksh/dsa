#include<iostream>
using namespace std;
struct node{
int key;
node*r;
node*l;
node(int k){
key=k;
r=NULL;
l=NULL;
}
};
int max(int a ,int b){
if(a>=b){
return a;
}
return b;
}
int height(struct node*root){
if(root==NULL){
return 0;
}
else{
return max(height(root->l),height(root->r))+1;
}
}
struct node*search(struct node*root,int k){
if(root==NULL||k==root->key){
return root;
}
else if(k>root->key){
return search(root->r,k);
}
else if(k<root->key){
return search(root->l,k);
}
return NULL;
}
struct node*root=NULL;
struct node*insert(struct node*root,int key){
if(root==NULL){
root=new node(key);
}
else if(key<root->key){
root->l=insert(root->l,key);
}
else if(key>root->key){
root->r=insert(root->r,key);
}
return root;
}
struct node*del(struct node*root,int key){
if(root==NULL){
return root;
}
else if(key<root->key){
root->l=del(root->l,key);
}
else if(key>root->key){
root->r=del(root->r,key);
}
else if(root->r!=NULL && root->l!=NULL){
struct node*succ=root->r;
while(succ->l!=NULL){
succ=succ->l;
}
root->key=succ->key;
root->r=del(root->r,succ->key);
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
else{
cout<<root->key<<" ";
preorder(root->l);
preorder(root->r);
}
}
void postorder(struct node*root){
if(root==NULL){
return;
}
else{
postorder(root->l);
postorder(root->r);
cout<<root->key<<" ";
}
}
void inorder(struct node*root){
if(root==NULL){
return;
}
else{
inorder(root->l);
cout<<root->key<<" ";
inorder(root->r);
}
}
int main(){
int k;
root=insert(root,20);
root=insert(root,8);
root=insert(root,22);
root=insert(root,7);
root=insert(root,10);
root=insert(root,21);
root=insert(root,25);
root=insert(root,6);
cout<<"preorder is";
preorder(root);
cout<<endl;
cout<<"postoder is";
postorder(root);
cout<<endl;
cout<<"inoroder is";
inorder(root);
cin>>k;
struct node*ptr;
ptr=search(root,k);
if(ptr==NULL){
cout<<"element not found";
}
else{
cout<<"element found";
}
cout<<"height is";
cout<<height(root);
del(root,6);
cout<<"inoroder is";
inorder(root);
del(root,7);
cout<<endl;
cout<<"inoroder is";
inorder(root);
cout<<endl;
del(root,25);
cout<<"inoroder is";
inorder(root);
cout<<endl;
}
