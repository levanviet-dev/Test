#include<bits/stdc++.h>
using namespace std;

vector<int> setFunction(vector<int> arr, int k)
{
    int m, n;
    set<int> s(arr.begin(), arr.end());
    set <int>:: iterator it;

    it = s.upper_bound(k);
    m =  (it != s.end()) ? *it : -1;

    it = s.lower_bound(k);
    n = (it != s.end()) ? *it : -1;

	cout<<"Cac so gom: ";
	for (it = s.begin(); it != s.end(); ++it) 
    	cout << ' ' << *it;	
	cout<<endl<<"--------------------------------"<<endl;

    return {m,n};
}


int main()
{
	vector<int> arr = {8, 9, 2, 5, 7, 8, 6, 2, 9, 7, 8, 6, 4, 9, 8};
	vector<int> o_arr = setFunction(arr, 5);
	cout<<"Cap so can tim la: ["<<o_arr[0]<<", "<<o_arr[1]<<"]"<<endl;
    	
	return 0;
}

