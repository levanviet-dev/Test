#include<bits/stdc++.h>
using namespace std;

map <string, int> mergeProducts(vector<string> A, vector<string> B){
    map <string, int> cnt;
    for (auto x : A) {
        cnt[x]++;
    }  
    map <string, int> res;
    for (auto x : B) {
        if (cnt[x] == 0) {
            res[x]= true;
            cnt[x]++;
        } else {
            res[x] = false;
        }
    }
    return res;
}

int main()
{
	vector<string> A = {"Banana", "Banana", "Apple"};
	vector<string> B = {"Orange", "Apple", "Banana", "Watermelon"};
	map<string, int> res = mergeProducts(A, B);
	cout<<"{";
	for(auto kq : res) cout<<kq.first<<"-->"<<kq.second<<",";
	cout<<"}";
}

