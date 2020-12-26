#include<bits/stdc++.h>
using namespace std;

int sumOfCommon(vector<int> arr1, vector<int> arr2)
{
    map <int, int> cnt;
    int ans = 0;
    for (auto x : arr1)
        cnt[x] = x;
    
    map <int, int>::iterator it;
    for (auto x : arr2)
    {
    	it = cnt.find(x);
        if (it != cnt.end())
        {
            ans += it->second;
            cnt[x] = 0;
        }
    }
    return ans;
}

int main()
{
	vector<int> arr1 = {6, 7, 5, 4, 6, 8};
	vector<int> arr2 = {2, 5, 7, 5, 3};

	int os = sumOfCommon(arr1, arr2);
	cout<<"Ket qua la: "<<os<<endl;
    	
	return 0;
}

