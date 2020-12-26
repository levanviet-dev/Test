#include<bits/stdc++.h>
using namespace std;

string hashTable[21];
int hashTableSize = 21;

int hashFunc(string s) {
	int index = 0;
	for (int i = 0; i<s.length(); i++)
		index += s.at(i); //Tong cac gia tri ASCII
	return index % 10;
}

void insertToHashTable(string s)
{
    //Tinh chi so tren bang bam thong qua ham bam hashFunc
    int index = hashFunc(s);
    //Tim mot vi tri chua duoc su dung. Neu vuot hashTableSize thi vong lai
    while (hashTable[index] != "")
        index = (index + 1) % hashTableSize;
    hashTable[index] = s;
}

void searchString(string s)
{
    //Tinh chi so tren bang bam thong qua ham bam hashFunc
    int index = hashFunc(s);
    //Tim mot vi tri chua duoc su dung. Neu vuot hashTableSize thi vong lai
    while (hashTable[index] != s and hashTable[index] != "")
        index = (index + 1) % hashTableSize;
    //Kiem tra xem phan tu co ton tai tren bang bam hay khong?
    if (hashTable[index] == s)
        cout << "Tim thay " << s << endl;
    else
        cout << "Khong tim thay " << s << endl;
}

int main()
{
	char ch = 'a';
	string s_in;
	while (true) {
		cout<<"Nhan (i) de chen, nhan (s) de tim, nhan (x) de thoat."<<endl;
		cin>>ch;
		switch (ch) {
			case 'i':
				cin>>s_in;
				insertToHashTable(s_in);
				cout<<"Da chen: "<<s_in<<endl;
				break;
			case 's':
				cin>>s_in;
				searchString(s_in);
				break;
			default:
				break;
		}
		for (int i = 0; i<hashTableSize; i++) {
			if (hashTable[i] != "")
				cout<<i<<"-"<<hashTable[i]<<", ";
			else
				cout<<i<<"-rong, ";
		}
		cout<<endl;
		if (ch == 'x') break;
	}
	
	return 0;
}


