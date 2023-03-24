#include<iostream>
using namespace std;
#define N 7
int arr[N];
void insert(int a){
int k,j,nk;
k=(a)%N;
if(arr[k]==-1){
arr[k]=a;
}
else{
for(j=0;j<N;j++){
nk=(k+(j*j))%N;
if(arr[nk]==-1){
arr[nk]=a;
break;
}
}
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
insert(36);
insert(18);
insert(72);
insert(43);
insert(6);
insert(10);
insert(5);
display();
}
