#include<iostream>
using namespace std;
#define N 10
int arr[N];
void insert(int a){
int k,j,nk;
k=(2*a)+3%N;
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
