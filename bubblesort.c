#include<stdio.h>
#include<stdlib.h>
void bubblesort(int arr[],int n){
int i;
int j;
int temp;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(arr[i]<arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
}
int main(){
int arr[]={5,4,3,2,1};
bubblesort(arr,5);
}

