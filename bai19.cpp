#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int> a,pair<char,int> b)
{
	return a.second>b.second;
}
void Sapxep(map<char,int> m)
{
	vector<pair<char,int>> v;
	for(auto it:m)
	{
		v.push_back(it);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto it:v)
	{
		cout<<it.first;
	}
}
int main()
{
	string str="codelearn";
	map<char,int> m;
	for(int i=0;i<str.size();++i)
	{
		m[str[i]]++;
	}
	Sapxep(m);
}


