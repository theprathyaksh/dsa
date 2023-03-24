#include<iostream>
using namespace std;
int size=10;
struct node{
int ver;
node *next;
node(int v){
ver=v;
next=NULL;
}
};
int q[10];
int va[10];
int f1=-1;
int r1=-1;
void enq(int a){
if(r1==size-1){
cout<<"queue is full";
}
else if (f1==-1 && r1==-1){
f1=r1=0;
q[f1]=a;
}
else{
r1++;
q[r1]=a;
}
}
int deq(){
int k;
if (f1==-1 && r1==-1){
cout<<"queue is empty";
}
else{
 k=q[f1];
f1++;
}
return k;
}

void bfs(struct node *adjList[10]){
int i;
for(i=0;i<10;i++){
va[i]=0;
}
int sv=0;
enq(sv);
va[sv]=1;
while(f1<=r1){
int v=deq();
cout<<v;
struct node*temp;
temp=adjList[v];
while(temp!=NULL){
if(va[temp->ver]==0){
enq(temp->ver);
va[temp->ver]=1;
}
temp=temp->next;
}
}
}
void insert(struct node *adjList[],int s,int d){
struct node*des=new node(d);
des->next=adjList[s];
adjList[s]=des;
       //connecting des to src index;
struct node*src=new node(s);
src->next=adjList[d];
adjList[d]=src;   //connecting src to des index;
}    // we store the adress of connecting nodes to the first index


void display(struct node *adjList[]){
int v;
for(v=0;v<10;v++){
cout<<v;
struct node*temp=adjList[v];
while(temp){
cout<<temp->ver;
temp=temp->next;
}
cout<<endl;
}
}
int main(){
struct node *adjList[10];
int i;
for(i=0;i<10;i++){
adjList[i]=NULL;
}
insert(adjList,0,  1);
insert(adjList,0,  2);
insert(adjList,1,  3);
insert(adjList,1,  4);
insert(adjList,2,  5);
insert(adjList,2,  6);
insert(adjList,4,  7);
insert(adjList,3,  7);
insert(adjList,6,  7);
insert(adjList,5,  7);
bfs(adjList);
//display(adjList);
}

