#include<bits/stdc++.h>
#define couple pair<int, int>
using namespace std;

int solve(int n, vector<int> arr) {
	queue<couple> q;
	
	for (auto i: arr) {
		q.push({i, 1});
	}
	
	while(n > q.front().second)
	{
		n -= q.front().second;
		q.push({q.front().first, q.front().second * 2});
		q.pop();
	}
	
	return q.front().first;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	int n = 3;
	
	cout << solve(n, arr);
}


