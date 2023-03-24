#include<iostream>
using namespace std;
struct node{
int p;
int data;
node *next;
node(int pr,int d){
p=pr;
data=d;
next=NULL;
}
};
struct node*front=NULL;
void enq(int p,int a)
{
struct node*nn=new node(p,a);
if(front==NULL||p<front->p){
nn->next=front;
front=nn;
}
/*else if(front->next==NULL)
{
struct node*temp=front;
if(nn->p<temp->p){
nn->next=temp;
front=nn;
}
else{
temp->next=nn;
}
}*/
else{
struct node*temp=front;
while(temp->next!=NULL && temp->next->p<=p){
temp=temp->next;
}
nn->next=temp->next;
temp->next=nn;
}
}
void deq(){
struct node*temp=front;
front=front->next;
delete(temp);
}
void display(struct node*front){
struct node*temp=front;
while(temp!=NULL){
cout<<temp->data;
temp=temp->next;
}
}
int main(){
int n,i,p;
cin>>n;
int a;
for(i=0;i<n;i++){
cout<<"enter v:";
cin>>a;
cout<<"enter p:";
cin>>p;
enq(p,a);
}
display(front);
deq();
display(front);
}
