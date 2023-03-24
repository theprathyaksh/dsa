#include<iostream>
using namespace std;
struct node{
int data;
node*next;
node*prev;
node(int a){
data=a;
next=NULL;
prev=NULL;
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
head->prev=nn;
}
else{
temp=head;
nn->next=temp;
nn->prev=tail;
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
head->prev=nn;
}
else{
temp=head;
while(temp->next!=head){
temp=temp->next;
}
temp->next=nn;
nn->next=head;
nn->prev=temp;
temp->next=nn;
tail=nn;
head->prev=nn;
}
}
void delh(){
struct node*temp;
temp=head->next;
head=temp;
head->prev=tail;
tail->next=temp;
}

void delt(){
struct node*temp;
temp=head;
while(temp->next->next!=head){
temp=temp->next;
}
delete(temp->next);
temp->next=head;
head->prev=temp;
}
void delp(int p){
struct node*temp1;
struct node*temp2;
temp1=head;
temp2=head;
int i;
for(i=1;i<p;i++){
temp1=temp2;
temp2=temp2->next;
}
temp1->next->next->prev=temp1;
temp1->next=temp1->next->next;
delete(temp2);
}
/*
void delp(int p){
struct node*temp1;
struct node*temp2;
temp1=head;
temp2=head;
int i;
for(i=1;i<p;i++){
temp1=temp2;
temp2=temp2->next;
}
temp1->next=temp1->next->next;
delete(temp2);
}
void delev(int v){
struct node*temp1;
struct node*temp2;
temp1=head;
temp2=head;
int i;
while(temp2->next->data!=v){
temp1=temp2;
temp2=temp2->next;
}
temp1->next=temp1->next->next;
delete(temp2);
}*/
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
nn->prev=temp;
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
insertp(29,2);
display(head);
delh();
delt();
cout<<"after";
display(head);
delp(5);
cout<<"after";
display(head);
/*cout<<"after";
delh();
delt();
delp(2);
display(head);
cout<<"afterr";
delev(3);
display(head);*/
}
