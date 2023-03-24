#include<iostream>
using namespace std;
#define N 10
#define p 10
int arr[N];
int h1(int a){
return a%N; 
}
int h2(int a)
{
return (p-(a%p));
}
void insert(int a){
int k,j,nk,v;
k=h1(a);
if(arr[k]==-1){
arr[k]=a;
}
else{
v=h2(a);
for(j=0;j<N;j++){
nk=(k+(v*j))%N;
if(arr[nk]==-1){
arr[nk]=a;
break;
}
}
if(arr[nk]==-1){
cout<<"element cant be inserted";
}
}
void display(){
int i;
for(i=0;i<N;i++){
if(arr[i]==-1){
cout<<'-'<<endl;
}
else{
cout<<arr[i]<<endl;
}
}
}
int main(){
int i,a;
for(i=0;i<N;i++){
arr[i]=-1;
}
insert(3);
insert(2);
insert(9);
insert(6);
insert(11);
insert(13);
insert(7);
insert(12);
display();
}
