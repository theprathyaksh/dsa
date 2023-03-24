#include<iostream>
using namespace std;
#define N 6
void bubblesort(int a[]){
int i,j;
int temp;
bool swap=false;
for(i=0;i<N;i++){
for(j=0;j<N-1-i;j++){
if(a[j]>a[j+1]){
swap=true;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
if(swap==false){
break;
}
}
}
int bs1(int a[],int k,int l,int h){
int m;
while(l<=h){
m=(l+h)/2;
if(a[m]==k){
return m;
}
else if(k>a[m]){
l=m+1;
}
else{
h=m-1;
}
}
return -1;
}
int bs2(int a[],int k,int l,int h){
//int l,h;
int m;
m=(l+h)/2;
/*cout<<"l and h are";
cout<<l;
cout<<h;*/
 if(l>h){
return -1;
}
else if(a[m]==k){
return m;
}
else if(k>a[m]){
return bs2(a,k,m+1,h);
}
else{
return bs2(a,k,0,m-1);
}
}
int main(){
int i,k;
int a[N];
for(i=0;i<N;i++){
cin>>a[i];
}
bubblesort(a);
cout<<"sorted array is";
for(i=0;i<N;i++){
cout<<a[i];
}
cout<<"k is";
cin>>k;
cout<<"key is at";
cout<<bs2(a,k,0,N-1);
/*
cout<<"key is at";
cout<<ls2(a,k);*/
}
