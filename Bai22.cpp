#include<bits/stdc++.h>
using namespace std;

int maximumDifference(vector<string> arr)
{
    map<string, int> mp;
    int ans = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (mp.find(arr[i]) == mp.end()) {  //Neu chuoi chua co trong mp
            mp[arr[i]] = i;					//Luu chi so xuat hien dau tien
        }
        else {								//Neu da co trong mp
            ans = max(ans, i - (mp.find(arr[i])->second));
        }
    }
    return ans;
}

int main()
{
	vector<string> arr = {"codelearn", "io", "programmer", "codelearn", "programmer"};

	int os = maximumDifference(arr);
	cout<<"Hai phan tu giong nhau co khoang cach lon nhat la: "<<os<<endl;
    	
	return 0;
}

