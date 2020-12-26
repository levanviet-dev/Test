#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(a[0]); //So phan tu mang

	for(int i=0; i<n; i++){
		if(i < 2) {
			cout<<"-1"<<endl;
			continue;
		}
		priority_queue<int> Q;
		for(int j=i; j>=0; j--)  //Dua vao hang doi uu tien
			Q.push(a[j]);
		int k=0, y =I NT_MAX;
		int pro = 1;
		while(k<3 || Q.size()<=0) { //Tinh tong cua ba so lon nhat
			int x = Q.top();
			Q.pop();
			if(x != y) {
				pro *= x;
				k++;
			}
		}
		if(k<2) cout<<"-1"<<endl;
		else {
			cout<<pro<<endl;
		}
	}
}

