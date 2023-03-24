#include<iostream>
using namespace std;
void display(struct node *head);
void Insertail(int val);
int check(struct node*head,int val);
struct node*head=NULL;
struct node{
int data;
struct node *next;
node(int val){
data=val;
next=NULL;
}
};
void insertm(int v){
struct node*nn,*temp;
nn=new node(v);
temp=head;
int c=0;
while(temp->data!=20)
{
temp=temp->next;
c++;
}
for(int i=1;i<c-1;i++){
temp=temp->next;
}
nn->next=temp->next;
temp->next=nn;
}
void Insertail(int val)
{
struct node *nn,*temp;
nn=new node(val);
if(head==NULL){
head=nn;
}
else{
temp=head;
while(temp->next!=NULL)
temp=temp->next;

temp->next=nn;
}}
int check(struct node*head,int val)
{int c=0;
struct node*temp=head;
while(temp!=NULL){
if(temp->data==val){
c++;
}
temp=temp->next;
}
if(c>0){
return 1;
}
else{
return 0;
}
}
void display(struct node *head){
struct node *temp;
temp=head;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
int main()
{
int a,i,p,v,b;
for(i=0;i<5;i++){
scanf("%d",&a);
Insertail(a);
}
int x=check(head,20);
if(x==1){
cout<<"avalue"<<" ";
cin>>v;
insertm(v);
display(head);
}
else{
cout<<"20 is not present in the list so we cant add the value";
}
return 0;
}

