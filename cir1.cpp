#include<iostream>
using namespace std;
struct node{
int data;
node*next;
node(int a){
data=a;
next=NULL;
}
};
struct node*head=NULL;
struct node*tail=NULL;
void inserthead(int a){
struct node*nn;
struct node*temp;
nn=new node(a);
if(head==NULL){
head=nn;
head->next=nn;
}
else{
temp=head;
nn->next=temp;
head=nn;
tail->next=nn;
}
}
void insertail(int a){
struct node*nn;
struct node*temp;
nn=new node(a);
if(head==NULL){
head=nn;
head->next=nn;
}
else{
temp=head;
while(temp->next!=head){
temp=temp->next;
}
temp->next=nn;
nn->next=head;
tail=nn;
}
}
void insertp(int a,int n){
struct node*nn;
struct node*temp;
nn=new node(a);
int i;
int p=n/2;
for(i=1;i<p-1;i++){
temp=temp->next;
}
nn->next=temp->next;
temp->next=nn;
}
void insertb(int a,int v){
struct node*nn;
struct node*temp;
nn=new node(a);
temp=head;
while(temp->next->data!=v){
temp=temp->next;
}
nn->next=temp->next;
temp->next=nn;
}
void inserta(int a,int v){
struct node*nn;
struct node*temp;
nn=new node(a);
nn=new node(a);
temp=head;
while(temp->data!=v){
temp=temp->next;
}
nn->next=temp->next;
temp->next=nn;
}
void display(struct node*head){
struct node*temp;
temp=head;
while(temp->next!=head){
cout<<temp->data<<endl;
temp=temp->next;
}
cout<<temp->data<<endl;
}
int main(){
struct node*ptr;
int n,a,i;
cin>>n;
for(i=0;i<n;i++){
cin>>a;
insertail(a);
}
inserthead(20);
inserthead(60);
insertp(70,n);
insertb(9,2);
display(head);
}
