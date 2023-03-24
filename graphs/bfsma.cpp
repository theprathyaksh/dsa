#include<iostream>
using namespace std;
#define n 7
int q[7];
int f=-1;
int r=-1;
int va[6];
int stack[n];
int top=-1;
void push(int a){
stack[++top]=a;
}
int pop(){
int x;
x=stack[top--];
return x;
}
void enq(int a){
if(f==-1 && r==-1){
f=r=0;
q[r]=a;
}
else{
q[++r]=a;
}
}
int deq(){
int x;
x=q[f++];
return x; 
}
void bfs(int arr[n][n]){
int i,j;
for(i=0;i<n;i++){
va[i]=0;
}
int sv=1;
enq(sv);
va[sv]=1;
while(f<=r){
int v=deq();
cout<<v<<" ";
for(j=0;j<n;j++){
if(arr[v][j]==1 && va[j]==0){
enq(j);
va[j]=1;
}
}
}
}
void dfs(int arr[n][n],int s){
int i,j;
cout<<s<<" ";
va[s]=1;
for(j=0;j<n;j++){
if(arr[s][j]==1 && va[j]==0){
dfs(arr,j);
}
}
}
void dfs1(int arr[n][n]){
int i,j;
for(i=0;i<n;i++){
va[i]=0;
}
int sv=1;
push(sv);
//va[sv]=1;
while(top!=-1){
int v=pop();
if(va[v]==0){
cout<<v<<" ";
va[v]=1;
}
for(j=0;j<n;j++){
if(arr[v][j]==1){
push(j);
//cout<<"j is";
//cout<<j;
//va[j]=1;
}
}
}
}
int main(){
int i;
int arr[n][n]={{0,1,1,1,0,0,0},
{1,0,1,0,0,0,0},
{1,0,1,0,1,0,0},
{0,0,1,1,0,1,1},
{0,0,0,0,1,0,0},
{0,0,0,0,1,0,0}};
cout<<"bfs is"<<endl;
//bfs(arr);
//cout<<"with recursion"<<endl;
dfs1(arr);
cout<<endl;
//cout<<"with stack"<<endl;
//dfs1(arr);
}
