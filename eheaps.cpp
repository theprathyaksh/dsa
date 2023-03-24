#include<iostream>
using namespace std;
#define N 5
void shiftup(int a[],int s,int e){
int c;
int p;
int temp;
for(c=e;c>s;c=p){
p=(c-1)/2;
if(a[p]<a[c]){
temp=a[p];
a[p]=a[c];
a[c]=temp;
}
}
}
void heapify(int a[],int c){
int s=0;
int e=1;
while(e<c){
shiftup(a,0,e);
e=e+1;
}
}
void display(int a[]){
int i;
for(i=0;i<N;i++){
cout<<a[i]<<endl;
}
}
int main(){
int a[]={5,4,3,2,1};
int i;
heapify(a,N);
int temp;
for(i=N-1;i>=0;i--){
temp=a[0];
a[0]=a[i];
a[i]=temp;
heapify(a,i);
}
display(a);
}
