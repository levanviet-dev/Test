#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<string> &a, int lo, int hi, int d)  
{  
    int i, j;
    string key;
    for (i = lo + 1; i <= hi; i++) 
    {  
        key = a[i];
        j = i - 1;  
  
        while (j >= 0 && a[j] > key)
        {  
            a[j + 1] = a[j];
            j = j - 1;  
        }  
        a[j + 1] = key;  
    }  
}

int N, R = 256;
int const M = 5;
vector<string> aux(14);
	
int charAt(string s, int d)
{ 
	if (d < s.size()) return s.at(d); 
	else return -1; 
}	

void sort(vector<string> &a, int lo, int hi, int d)
{ 	// Sort from a[lo] to a[hi], starting at the dth character.
	if (hi <= lo + M) {
		insertionSort(a, lo, hi, d); 
		return;
	}
	vector<int> count(R+2);      // Compute frequency counts.
	for (int i = lo; i <= hi; i++)
		count[charAt(a[i], d) + 2]++;
	for (int r = 0; r < R+1; r++) // Transform counts to indices.
		count[r+1] += count[r];
	for (int i = lo; i <= hi; i++) // Distribute.
		aux[count[charAt(a[i], d) + 1]++] = a[i];
	for (int i = lo; i <= hi; i++) // Copy back.
		a[i] = aux[i - lo];
	// Recursively sort for each character value.
	for (int r = 0; r < R; r++) {  //R = 256;
		if(lo + count[r+1] - 1 >= lo + count[r])
			sort(a, lo + count[r], lo + count[r+1] - 1, d+1);
	}
}

int main()
{
	vector<string> a = {"she","sells","seashells","by","the","sea",
						"shore","the","shells","she","sells","are","surely","seashells"};
	N = a.size();
	aux.resize(N);
	
	cout<<"Before sorting:"<<endl;
	for(auto x : a) {
		cout<<x<<endl;
	}
	cout<<"---------------------------"<<endl;
	cout<<"After sorting:"<<endl;
	sort(a, 0, N-1, 0);
	for(auto y : a) {
		cout<<y<<endl;
	}
}


