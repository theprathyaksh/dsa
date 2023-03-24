#include<iostream>
using namespace std;
#define N 10
struct node{
int data;
node*next;
node(int a){
data=a;
next=NULL;
}
};
void insert(struct node*adjList[],int s,int d){
struct node *des=new node(d);
des->next=adjList[s];
adjList[s]=des;
struct node *src=new node(s);
src->next=adjList[d];
adjList[d]=src;
}
void display(struct node*adjList[]){
int i;
struct node *temp;
for(i=0;i<10;i++){
cout<<i;
temp=adjList[i];
while(temp!=NULL){
cout<<temp->data<<" ";
temp-temp->next;
}
cout<<endl;
}
}
int main(){
int i;
struct node*adjList[10];
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
display(adjList);
}
