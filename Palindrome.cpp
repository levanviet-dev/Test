#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<char> str_queue;
	stack<char> str_stack;
	string x="aaAaa";
	for(auto c:x){
		str_queue.push(c);
		str_stack.push(c);
	}
	int n =x.length();
	bool isP =true;
	for(int i=0;i<n;i++){
		char fq =str_queue.front();
		str_queue.pop();
		char fs= str_stack.top();
		str_stack.pop();
		if(fq != fs){
			isP=false;
			break;
		}
	}
	if(isP) cout<<" chuoi "<<x<<" la chuoi Palindrome"<<endl;
	else cout<<"chuoi"<<x<<"khong phai la chuoi Palinddrome"<<endl;
} 
