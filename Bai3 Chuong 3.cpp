#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100], b[100], n,k;
	cout<<"Nhap o=so phan tu cua mang n = ";
	cin>>n;
	cout<<"\nNhap K(k<n) = ";
	cin>>k;
	for(int i = 0; i < n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
		b[i] = a[i]%k;
	}
	for(int i=0; i < n; i++){
		cout<<" "<<a[i];
	}
	cout<<"\n";
//	for(int i=0; i < n; i++){
//		cout<<" "<<b[i];
//	}
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j<n; j++){
			if( (b[j]>b[i]) || ((b[j]==b[i]) && a[i] > a[j] )){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"\n";
	for(int i = 0; i < n; i++){
		cout<<" "<<a[i];
	}
}


