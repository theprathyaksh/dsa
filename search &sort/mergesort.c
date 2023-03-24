#include<stdio.h>
#include<stdlib.h>
int n;
void merge(int a[],int l,int u,int m){
int b[50];
int i=l;
int j=m+1;
int k=l;
while(i<=m&&j<=u){
if(a[i]<a[j]){
b[k]=a[i];
i++;
k++;
}
else{
b[k]=a[j];
j++;
k++;
}
}
while(j<=u){
b[k]=a[j];
j++;
k++;
}
while(i<=m){
b[k]=a[i];
i++;
k++;
}
for(k=l;k<=u;k++){
a[k]=b[k];
}
}
void mergesort(int a[],int l,int u){
int m;
if(l<u){
 m=(l+u)/2;
mergesort(a,l,m);
mergesort(a,m+1,u);
merge(a,l,u,m);
}
}
int main(){
int i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
for(j=0;j<n;j++){
printf("%d",a[j]);
}
}

