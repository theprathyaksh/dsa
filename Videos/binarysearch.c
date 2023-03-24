#include<stdio.h>
#include<stdlib.h>
int search(int a[],int key,int l,int u){
int m=(l+u)/2;
if(l>u){
return -1;
}
else if(a[m]==key){
return m;
}
else if(key>a[m]){
return search(a,key,m+1,u);
}
else{
return search(a,key,l,m);
}
}
int main(){
int k;
int arr[]={5,4,3,2,6,1};
printf("%d",search(arr,6,0,5));
}
