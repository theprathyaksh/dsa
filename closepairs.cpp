#include<iostream>
#include<cmath>
#include<climits>
#include<cfloat>
#define N 3
using namespace std;
struct point{
int x;
int y;
};
struct point p[N];
void mini(struct point p[]){
float min;
min=FLT_MAX;
int i,j;
float dist;
int x1,y1;
int x2,y2;
for(i=0;i<N-1;i++){
for(j=i+1;j<N;j++){
dist=sqrt(((p[i].x-p[j].x)*(p[i].x-p[j].x))+((p[i].y-p[j].y)*(p[i].y-p[j].y)));
cout<<"dis at i"<<i;
cout<<dist<<endl;
if(dist<min){
min=dist;
x1=p[i].x;
x2=p[j].x;
y1=p[i].y;
y2=p[j].y;
}
} 
}
cout<<min;
cout<<"they are minimum at";
cout<<"("<<x1<<","<<y1<<")"<<"("<<x2<<","<<y2<<")";
}
int main(){
int di;
int i;
for(i=0;i<N;i++){
cin>>p[i].x;
cin>>p[i].y;
}
mini(p);
}

