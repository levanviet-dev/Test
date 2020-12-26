#include<bits/stdc++.h>
using namespace std;

int GetNumberOfLine(string filename) {
	fstream f0;
	f0.open(filename, ofstream::in);
	//f0.clear();
	//f0.seekg(0, ios::beg);
	int noline = 0;
	string s;
	while(!f0.eof()){
		getline(f0, s);
		noline++;
	}
	f0.close();
	
	return noline;
}

vector<int> mergeTwoArr(vector<int> A, vector<int> B) {
	int currA = 0, currB = 0, currC = 0;
	int N = A.size();
	int M = B.size();
	A[N] = INT_MAX;
	B[M] = INT_MAX;
	vector<int> C(N + M);
	for (int currC=0; currC < N + M; currC++)
		if (A[currA] < B[currB]) {
			C[currC] = A[currA];
			currA++;
		}
		else {
			C[currC] = B[currB];
			currB++;
		}
		
	return C;
}

int main()
{
	int m = 1, i, NoLine;

	string s;
	NoLine = GetNumberOfLine("f0.txt");
	while (m <= NoLine) {
		ifstream f0("f0.txt", ifstream::in);
		ofstream f1("f1.txt", ofstream::trunc);
		ofstream f2("f2.txt", ofstream::trunc);
		while(!f0.eof()) {
			//Distribute
			i = 1;
			while (i <= m) {
				if (!f0.eof()) {
					getline(f0, s);
					if(s!="") f1<<s<<endl;
				} else break;
				i++;
			}
			i = 1;
			while (i <= m) {
				if (!f0.eof()) {
					getline(f0, s);
					if(s!="") f2<<s<<endl;
				} else break;
				i++;
			}
		}
		f0.close();
		f1.close();
		f2.close();
		//Merge two files by Run
		ofstream f0m("f0.txt", ofstream::trunc);
		ifstream f1m("f1.txt", ifstream::in);
		ifstream f2m("f2.txt", ifstream::in);
		int n1, n2, j;
		while (!f1m.eof() || !f2m.eof()) {
			i = 1; j = 1;
			getline(f1m, s);
			if (s != "") n1 = stoi(s);
			getline(f2m, s);
			if (s != "") n2 = stoi(s);
			while ((i<=m && !f1m.eof()) || (j<=m && !f2m.eof())) {
				while (n1 < n2 && i<=m) {
					if(!f1m.eof() || i==1) f0m << n1 << endl;
					i++;
					if(i<=m && !f1m.eof()) {
						getline(f1m, s); 
						if (s != "") n1 = stoi(s);
					} else n1 = INT_MAX;
				}
				while (n2 <= n1 && j<=m) {
					if(!f2m.eof() || j==1) f0m << n2 << endl;
					j++;
					if(j<=m && !f2m.eof()) {
						getline(f2m, s); 
						if (s != "") n2 = stoi(s);
					} else n2 = INT_MAX;
				}
			}

		}
		f0m.close();
		f1m.close();
		f2m.close();
		//Inrease the distributed number
		m *= 2;	
	}
	cout<<"Completed! Please the output file.";
	
	return 0;
}


