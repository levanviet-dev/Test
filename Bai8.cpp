#include<bits/stdc++.h>
using namespace std;

vector<string> getDistinctProducts(vector<string> products){
	set<string> disPros;
    vector<string> ret;
    
    for (int i = 0; i < products.size(); i++) {
        disPros.insert(products.at(i));
    }
    for (set<string>::iterator it = disPros.begin(); it != disPros.end(); it++) {
        ret.push_back(*it);
    }
    return ret;
}

int main()
{
	vector<string> str_Pros = {"watermelon", "grapes", "grapes", "apple", "grapes"};
	vector<string> o_str = getDistinctProducts(str_Pros);
	int n = o_str.size();
	for (int i = 0; i < n; i++)
		cout<<(i+1)<<") "<<o_str[i]<<endl;
    	
	return 0;
}

