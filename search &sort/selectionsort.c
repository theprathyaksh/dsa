#include<stdio.h>
#include<stdlib.h>
void selectionsort(int arr[],int n){
int i;
int j;
int minindex;
int temp;
for(i=0;i<n;i++){
minindex=i;
for(j=i+1;j<n;j++){
if(arr[j]<arr[minindex]){
minindex=j;
}
}
temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
}
int main(){
int arr[]={5,4,3,2,1};
selectionsort(arr,5);
}
