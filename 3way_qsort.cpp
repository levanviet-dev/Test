#include<bits/stdc++.h>
using namespace std;

int N, R = 256;
int const M = 5;
vector<string> aux(14);

template <typename T>
void exch(vector<T> &a, int i, int j)
{   T t = a[i]; 
	a[i] = a[j]; 
	a[j] = t; 
}

int charAt(string s, int d)
{ 
	if (d < s.size()) return s.at(d); 
	else return -1; 
}

void sort(vector<string> &a, int lo, int hi, int d)
{
	if (hi <= lo) return;
	int lt = lo, gt = hi;
	int v = charAt(a[lo], d);
	int i = lo + 1;
	while (i <= gt)
	{
		int t = charAt(a[i], d);
		if (t < v) exch(a, lt++, i++);
		else if (t > v) exch(a, i, gt--);
		else i++;
	}
	// a[lo..lt-1] < v = a[lt..gt] < a[gt+1..hi]
	sort(a, lo, lt-1, d);
	if (v >= 0) sort(a, lt, gt, d+1);
	sort(a, gt+1, hi, d);
}

int main()
{
	vector<string> a = {"she","sells","seashells","by","the","sea",
						"shore","the","shells","she","sells","are","surely","seashells"};
	N = a.size();
	aux.resize(N);
	
	cout<<"Before sorting:"<<endl;
	for(auto x : a) {
		cout<<x<<endl;
	}
	cout<<"---------------------------"<<endl;
	cout<<"After sorting:"<<endl;
	sort(a, 0, N-1, 0);
	for(auto y : a) {
		cout<<y<<endl;
	}
}

