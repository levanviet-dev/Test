#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    string s="aacbn";
    map<char,int> M;
    for(char c:s)
    ++M[c];
    for(auto t:M)
    cout<< t.first << " " << t.second << endl;
	

}


