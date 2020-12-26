#include<bits/stdc++.h>
using namespace std;

int aramic(vector<string> words)
{
    set<string> s;
    
    for(int i = 0; i < words.size(); i++){
        string str = words[i];
        set<char> ch;
        for(int j = 0; j < str.length(); j++){
            ch.insert(str[j]);
        }
        string e = "";
        for(auto x:ch) e += x;
        s.insert(e);
    }
    return s.size();
}

int main()
{
	vector<string> str ={"a","aa","aaa","ab","abb"};
	int o = aramic(str);
	cout<<"Ket qua la: "<<o<<endl;
    	
	return 0;
}

