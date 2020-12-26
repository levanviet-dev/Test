#include<bits/stdc++.h>
using namespace std;

vector<string> greaterString(vector<string> arr1, vector<string> arr2)
{
    map<string, bool> cnt;
    
    for (auto x : arr1)
        cnt[x] = 1;
        
    vector <string> ans;
    for (auto x : arr2)
    {
        if (cnt.upper_bound(x) != cnt.end())
        {
            auto str = cnt.upper_bound(x); //Tu dong nhan dang kieu
            ans.push_back(str->first);
        }
        else
        {
            ans.push_back("-1");
        }
    }
    return ans;
}

int main()
{
	vector<string> arr1 = {"codelearn","learncode", "io"};
	vector<string> arr2 = {"code","war","io"};

	vector<string> os = greaterString(arr1, arr2);
	cout<<"Ket qua la: "<<endl;
	for (auto x:os) cout<<x<<" ";
    	
	return 0;
}

