#include<iostream>
using namespace std;
#define N 10
struct node*arr[N];
struct node{
int data;
node*next;
node(int a){
data=a;
next=NULL;
}
};
void insert(int a){
struct node*nn;
struct node*temp;
nn=new node(a);
int k;
k=(nn->data)%N;
if(arr[k]==NULL){
arr[k]=nn;
}
else{
temp=arr[k];
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=nn;
}
}
void search(int k){
int i;
struct node*temp;
temp=arr[k%N];
while(temp!=NULL&&temp->data!=k){
temp=temp->next;
}
if(temp==NULL){
cout<<"key not found"<<endl;
}
else if(temp->data==k){
cout<<"key found"<<endl;
}
}
void dele(int a){
int i,k;
struct node*temp;
struct node*temp1;
int f=0;
k=a%N;
temp=arr[k];
while(temp!=NULL&& temp->data!=a){
f=1;
temp1=temp;
temp=temp->next;
}
if(f==0 && temp->data==a){
arr[k]=temp->next;
}
else if(temp->data==a){
temp1->next=temp1->next->next;
delete(temp);
}
}
void display(){
struct node*temp;
int i;
for(i=0;i<N;i++){
temp=arr[i];
while(temp!=NULL){
cout<<temp->data<<endl;
temp=temp->next;
}
}
}
int main(){
int i,a;
for(i=0;i<N;i++){
arr[i]=NULL;
}
insert(3);
insert(2);
insert(4);
insert(24);
insert(11);
insert(13);
insert(7);
insert(12);
display();
search(12);
search(29);
dele(12);
display();
}
