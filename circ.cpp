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
void delh(){
struct node*temp;
temp=head->next;
head=temp;
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
inserthead(60);;
display(head);
cout<<"after";
delh();
delt();
delp(2);
display(head);
cout<<"afterr";
delev(3);
display(head);
}
