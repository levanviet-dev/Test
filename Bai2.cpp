#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a = {8, 9, 2, 5, 7, 8, 6, 2, 9, 7, 8, 6, 4, 9, 8};
	int n = a.size();
	
	if (n < 2) {
		cout<<"NO";
		return 0;
	}
	
	set<int> s;
	for(int i=0; i<n;i++)
		s.insert(a[i]);
	
	cout<<"Phan tu lon thu hai trong day: ";
	set<int>::iterator it = s.begin();
	advance(it, 1); //Dich chuyen con tro tien len mot phan tu
	cout<<*it<<endl;

	cout<<"--------------------------------"<<endl;
	cout<<"Cac so gom: ";
	for (it = s.begin(); it != s.end(); ++it) 
    	cout << ' ' << *it;
    	
	return 0;
}

