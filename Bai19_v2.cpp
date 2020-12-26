#include<bits/stdc++.h>
using namespace std;

struct st {
	char c;
	int fr;
};

struct cmp {
    bool operator() (st a, st b) {
    	if (b.fr > a.fr)
         	return b > a;
        else
        	return a > b;
    }
};


string modifyString(string s){
    map<char, int> mp;
    for (auto x : s)
    {
        mp[x]++;
    }
    
    vector<pair<char, int>> vt(mp.begin(), mp.end());
    for (int i = 0; i < vt.size(); i++)
    {
        for (int j = i + 1; j < vt.size(); j++)
        {
            if (vt[i].second < vt[j].second)
            {
                swap(vt[i], vt[j]);
            }
            else if (vt[i].second == vt[j].second)
            {
                if (vt[i].first > vt[j].first)
                {
                    swap(vt[i], vt[j]);
                }
            }
        }
    }
    
    string rs = "";
    for (auto x : vt)
    {
        rs.push_back(x.first);
    }
    return rs;
}

int main()
{
	string s;
	cout<<"Nhap kich thuoc cua so:";
	cin>>s;

	string os = modifyString(s);
	cout<<"Day duoc sua doi la: "<<os<<endl;
    	
	return 0;
}

