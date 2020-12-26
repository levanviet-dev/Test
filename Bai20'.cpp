#include<bits/stdc++.h>
using namespace std;
map<string,string> Bai20(vector<string> arr1,vector<string>arr2)
{
	map<string,string>m;
	vector<string>::iterator it1;
	vector<string>::iterator it2;
	for(it2=arr2.begin();it2!=arr2.end();++it2)
	{
		m.insert(pair<string,string> (*it2,""));
		
	}
	for(it2=arr2.begin();it2!=arr2.end();++it2)
	{
		for(it1=arr1.begin();it1!=arr1.end();++it1)
		{
			if(*it2<*it1)
			{
				if(m.find(*it2)->second=="")
				m.find(*it2)->second=*it1;
				else if(*it1<m.find(*it2)->second)
				{
					m.find(*it2)->second=*it1;
				}
			}
		}
	}
	return m;
}
int main()
{
	vector<string> arr1={"codelearn","learncode","io"};
	vector<string> arr2={"code","war","io"};
	map<string,string> m=Bai20(arr1,arr2);
	vector<string>::iterator it;
	for(it=arr2.begin();it!=arr2.end();++it)
	{
		if(m[*it]=="") cout<<"-1 ";
		else cout<<m[*it]<<" ";
	}
}


