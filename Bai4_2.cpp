#include<bits/stdc++.h>
using namespace std;

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
	int i=0, n, last_n = INT_MIN, no_run = 2, l=0;
	string s;
	while (no_run > 1)
	{
		l++; cout<<"Run "<<l<<endl;
		ifstream f0("f0.txt", ifstream::in);
		ofstream f1("f1.txt", ofstream::trunc);
		ofstream f2("f2.txt", ofstream::trunc);
		int r = 0;
		while (!f0.eof()) {
			//Distribute
			getline(f0, s);
			if (s!="") {
				n = stoi(s);
				if (n < last_n) {
					if (i==0) i = 1;
					else i = 0;
					r++;
				}
				last_n = n;
				if (i==0) f1<<s<<endl;
				else f2<<s<<endl;
			}
		}
		f0.close();
		f1.close();
		f2.close();
		no_run = r;
		if (no_run > 1) {
			//Merge two files by Run
			ofstream f0m("f0.txt", ofstream::trunc);
			ifstream f1m("f1.txt", ifstream::in);
			ifstream f2m("f2.txt", ifstream::in);
			int n1 = INT_MIN, n2 = INT_MIN, j;
			i = 0; j = 0; 
			int last_n1 = INT_MIN, last_n2 = INT_MIN;
			getline(f1m, s);
			if (s != "") n1 = stoi(s);
			getline(f2m, s);
			if (s != "") n2 = stoi(s);
			while (!f1m.eof() || !f2m.eof()) {
				if (n1 < n2 && ((n1>last_n1) || (n1<last_n1 && n2<last_n2)) || f2m.eof()){					
					if(!f1m.eof() || i==0) {
						f0m << n1 << endl;
						cout<<"n1="<<n1<<"__"<<last_n1<<"__1"<<"__n2="<<n2<<"__"<<last_n2<<endl;
						getline(f1m, s); 
						if (s != "") {
							last_n1 = n1;
							n1 = stoi(s);
						}
					} else n1 = INT_MAX;
					i++;
				} else if (n1 < n2 && n1<last_n1 && n2>last_n2) {
					if(!f2m.eof() || j==0) {
						f0m << n2 << endl;
						cout<<"n1="<<n1<<"__"<<last_n1<<"__2"<<"__n2="<<n2<<"__"<<last_n2<<endl;
						getline(f2m, s);
						if (s != "") {
							last_n2 = n2;
							n2 = stoi(s);
						}
					} else n2 = INT_MAX;
					j++;
				} else if (n2 <= n1 && ((n2>last_n2) || (n1<last_n1 && n2<last_n2) || f1m.eof())) {
					if(!f2m.eof() || j==0) {
						f0m << n2 << endl;
						cout<<"n1="<<n1<<"__"<<last_n1<<"__3"<<"__n2="<<n2<<"__"<<last_n2<<endl;
						getline(f2m, s);
						if (s != "") {
							last_n2 = n2;
							n2 = stoi(s);
						}
					} else n2 = INT_MAX;
					j++;
				} else if (n2 <= n1 && n2<last_n2 && n1>last_n1) {
					if(!f1m.eof() || i==0) {
						f0m << n1 << endl;
						cout<<"n1="<<n1<<"__"<<last_n1<<"__4"<<"__n2="<<n2<<"__"<<last_n2<<endl;
						getline(f1m, s); 
						if (s != "") {
							last_n1 = n1;
							n1 = stoi(s);
						}
					} else n1 = INT_MAX;
					i++;
				}
			}
			f0m.close();
			f1m.close();
			f2m.close();
		}
	}

	cout<<"Completed! Please the output file.";
	
	return 0;
}


