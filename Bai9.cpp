#include<bits/stdc++.h>
using namespace std;
bool ktnt(int n){
	int count=0;
	if(n<2) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(int i=3;i<sqrt(n);i+=2){
		if(n%i==0) count++;
	}
	if(count==0) return true;
	else return false;
}

bool sieuNT(int n){
	int d=0,dem=0;
	if(ktnt(n)) d++;
	while(n>0){
		n/=10;
		dem++;
		if(ktnt(n)) d++;
	}
	if(dem==d) return true;
	else return false;
}
int main()
{
	int n;
	cin>>n;
	queue<int> B;
	for(int i=2;i<=n;i++){
		if(sieuNT(i)){
			B.push(i);
		}
	}
	while(!B.empty()){
		cout<<B.front()<<" ";
		B.pop();
	}
}

