#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    map <int, int> cnt;
    
    for (auto x : arr)
        cnt[x]++;
        
    int ans = -1;
    int fre = INT_MAX;
    for (auto x : cnt)
    {
        if (x.second <= fre)
        {
            fre = x.second;
            ans = x.first;
        }
    }
    return ans;
}

int main()
{
	vector<int> arr = {2, 2, 4, 4, 7, 7, 7};

	int os = largestElement(arr);
	cout<<"Ket qua la: "<<os<<endl;
    	
	return 0;
}

