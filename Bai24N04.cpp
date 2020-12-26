#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> arr){
	map<int,int> m;
	map<int,int>::iterator itr;
	
	for(int i = 0; i<  arr.size() ;i++){
		m.insert(pair<int,int>(arr[i],0));
	}
	
	for(int i = 0; i<  arr.size(); i++){
		m.find(arr[i])->second++;
	}
	 int min = 1;
	 
	for(int i = 1; i<  arr.size(); i++){
		if(min>m.find(arr[i])->second){
			min = m.find(arr[i])->second;
		}}
	int max = arr[0];
	for(itr = m.begin();itr!= m.end();itr++){
		if(max<itr->first && itr->second == min){
			max = itr->first;
		}}
		return max;
	}
	

int main()
{
	vector<int> a = {1,2,3,4,7,7};
	cout<<largest(a);
return 0;
}


