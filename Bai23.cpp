#include<bits/stdc++.h>
using namespace std;

bool checkSum(vector<int> arr, int sum) {
    map<int, int> mp;
    for (auto x : arr)
        mp[x]++;
        
    for (auto x : arr)
    {
        if (mp[sum-x] >= 1) 	//Co the ton tai tong hai so trong arr 
        {
            if (x != sum-x || (x == sum-x && mp[x] > 1)) //Ton tai tong hai so trong arr
				return true;
        }
    }
    return false;
}

int main()
{
	vector<int> arr = {2, 4, -1, 9, 8, 0};
	int k = 9;

	int os = checkSum(arr, k);
	cout<<"Ket qua la: "<<os<<endl;
    	
	return 0;
}

