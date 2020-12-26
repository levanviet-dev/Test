#include<bits/stdc++.h>

using namespace std;
 vector<int> mergeProducts(vector<string> A, vector<string> B)
 {
 	map <string,int> cnt;
 	for(auto x : A)
 	{
 		cnt[x]++; 
	 }
	 vector<int> ans;
	for( auto x : B)
	{
		if(cnt[x] == 0)
		{
			ans.push_back(true);
			cnt[x]++;
		}
		else
		{
			ans.push_back(false);
		}
	}
	return ans;
 }
int main()
{
  vector<int> a = mergeProducts({"Banana","Banana","Apple"},{"Orange","Apple","Banana","Watermelon"});
for(auto x:a)
{
	cout<<x<<" ";
}
}


