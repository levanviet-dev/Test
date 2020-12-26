#include<bits/stdc++.h>
using namespace std;

int C[26];
//Ham tinh chi so cua ky tu trong chuoi
int hash_function(char c) {
  return (c - 'a');
}
//Ham dem so lan xuat hien cua ky tu trong chuoi
void count_char(string S) {
  for (int i = 0; i < S.length(); i++) {
    int index = hash_function(S[i]);
    C[index]++;
  }
  for (int i = 0; i < 26; i++)
    cout << '\t' << (char)(i + 'a') << ' ' << C[i] << endl;
}

int main(){
    string S = "ababcd";
    cout << endl;
    count_char(S);
    return 0;
}

