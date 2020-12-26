#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<char, int> sf;
	string s;
	cout<<"Nhap chuoi s: ";
	cin>>s;
	for(auto c:s) sf[c]++;
	for(auto i:sf) cout<<"Ky tu "<<i.first<<", tan suat "<<i.second<<endl;
	
}

