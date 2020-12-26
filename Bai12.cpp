#include<bits/stdc++.h>
using namespace std;

int queueGame(int n)
{
    deque<int> q;
	for (int i = 1; i <= n; i++) {
		q.push_back(i);
	}
	
	for (int i = 1; i <= n; i++){
		int a = q.front();
		q.pop_front();
		q.push_back(a);
		q.push_back(a);
	}

    return q.front();
}

int main()
{
	int n;
	cout<<"Nhap vao mot so:";
	cin>>n;
	int a = queueGame(n);
	cout<<"So dau tien cua queue tai luot choi thu "<<n<<" la: "<<a<<endl;
    	
	return 0;
}

