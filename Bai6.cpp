#include<bits/stdc++.h>
using namespace std;

string diversity(string str, int k){
	set<char> s;
	int i;
	string rv;
	
	if (str.size() < k) {
		rv = "impossible";
	} else {
		for (i = 0; i < str.size(); i++) {
			s.insert(str.at(i));
		}
		if (s.size() >= k) {
			i = 0;
		} else {
			i = k - s.size();
		}
		rv = to_string(i);
	}
	return rv;
}

int main()
{
	string str = "yandex";
	string o_str = diversity(str, 5);
	cout<<"Ket qua la: "<<o_str<<endl;
    	
	return 0;
}

