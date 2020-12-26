#include<bits/stdc++.h>
using namespace std;

int main()
{
	int v[] = {2, 3, 6, 3};
	int n = sizeof(v) / sizeof(v[0]);
	set<int> s;
	for(int i=0; i<n;i++)
		s.insert(v[i]);
	cout<<"So phan tu can xoa: "<<(n - s.size())<<endl;
	
	cout<<"Cac so con lai gom: ";
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); ++it) 
    	cout << ' ' << *it;
	
	return 0;
}

