#include<bits/stdc++.h>
using namespace std;

vector<int> firstNegative(vector<int> a, int k)
{
    queue<int> q;
    int n = a.size();
    
    //Duyet cua so dau tien
    for (int i = 0; i < k - 1; i++) {
        if (a[i] < 0) q.push(i);
    }
    
    vector<int> res;
    //Duyet cua so thu hai tro di
    for (int i = k - 1; i < n; i++) {
        if (a[i] < 0) q.push(i);
        while (!q.empty() && q.front() < i - k + 1) q.pop();
        res.push_back(q.empty() ? 0 : a[q.front()]);
    }
    
    return res;
}

int main()
{
	int k;
	cout<<"Nhap kich thuoc cua so:";
	cin>>k;
	vector<int> a = {-8, 2, 3, -6, 10};
	vector<int> fn = firstNegative(a, k);
	cout<<"Day so am dau tien trong cua so la:"<<endl;
	for (auto x:fn)
		cout<<x<<" ";
    	
	return 0;
}

