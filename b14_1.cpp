#include<bits/stdc++.h>
using namespace std;
struct diem{
	int x,y;
	
};
float kc(diem d){
	return sqrt(d.x*d.x+d.y*d.y);
}
int main()
{
queue<int> q;
queue<int> p;
diem *d= new diem[100];
int n=5;
int k=3;
 for(int i=0;i<n;i++){
 	cin>>d[i].x>>d[i].y;
 }
 diem t;
  for(int i=0;i<n;i++){
  	 for(int j=i;j<n;j++){
  	 	if(kc(d[i])>kc(d[j])){
  	 	    t=d[i];
		 	d[i]=d[j];
		 	d[j]=t;
		   }
}
}
for(int i=0;i<k;i++){
    q.push(d[i].x);
	p.push(d[i].y); 
 }
 
 while(!q.empty()&&!p.empty()){
 	cout<<q.front()<<","<<p.front()<<"   ";
 	q.pop();
 	p.pop();
 }
}


