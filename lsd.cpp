#include<bits/stdc++.h>
using namespace std;

vector<string> sort(vector<string> a, int W)
{ 	// Sort a[] on leading W characters.
	int N = a.size();
	int R = 256;
	vector<string> aux(N);
	for (int d = W-1; d >= 0; d--)
	{   // Sort by key-indexed counting on dth char.
		vector<int> count(R+1); // Compute frequency counts.
		for (int i = 0; i < N; i++)
			count[a[i].at(d) + 1]++;
		for (int r = 0; r < R; r++) // Transform counts to indices.
			count[r+1] += count[r];
		for (int i = 0; i < N; i++) // Distribute.
			aux[count[a[i].at(d)]++] = a[i];
		for (int i = 0; i < N; i++) // Copy back.
			a[i] = aux[i];
	}
	
	return a;
}

int main()
{
	vector<string> a = {"4PGC938","2IYE230","3CIO720","1ICK750",
						"1OHV845","4JZY524","1ICK750","3CIO720",
						"1OHV845","1OHV845","2RLA629","2RLA629","3ATW723"};
	
	cout<<"Before sorting:"<<endl;
	for(auto x : a) {
		cout<<x<<endl;
	}
	cout<<"After sorting:"<<endl;
	vector<string> b = sort(a,7);
	for(auto x : b) {
		cout<<x<<endl;
	}
}

