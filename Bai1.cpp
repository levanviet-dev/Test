#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {8, 9, 2, 5, 7, 8, 6, 2, 9, 7, 8, 6, 4, 9, 8};
	int n = sizeof(a)/sizeof(a[0]);
	set<int> s;
	for(int i=0; i<n;i++)
		s.insert(a[i]);
	cout<<"So phan tu khac nhau: "<<s.size()<<endl;
	
	cout<<"Cac so gom: ";
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); ++it) 
    	cout << ' ' << *it;
	
	return 0;
}

