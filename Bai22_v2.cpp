#include<bits/stdc++.h>
using namespace std;

int maximumDifference(vector<string> arr)
{
    map<string, int> mp;
    int ans = 0;    
    
    for (int i = 0; i < arr.size(); i++) {
        if (mp[arr[i]] == 0) {  //Neu chuoi chua co trong mp
            mp[arr[i]] = i + 1;	//Luu chi so xuat hien dau tien + 1
        }
        else {					//Neu da co trong mp
            ans = max(ans, i - mp[arr[i]] + 1);
        }
    }
    return ans;
}

int main()
{
	vector<string> arr = {"codelearn", "io", "programmer", "codelearn", "codelearn", "programmer"};

	int os = maximumDifference(arr);
	cout<<"Hai phan tu giong nhau co khoang cach lon nhat la: "<<os<<endl;
    	
	return 0;
}

