#include<bits/stdc++.h>
using namespace std;

void countChar(string S){
    for(char c = 'a'; c <= 'z'; ++c){
        int count = 0;
        for(int i = 0; i < S.length(); ++i)
            if(S[i] == c)
                count++;
        cout << c << ' ' << count << endl;
    }
}

int main()
{
	string S = "ababcd";
	countChar(S);
}

