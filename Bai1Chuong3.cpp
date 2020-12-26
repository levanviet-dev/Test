#include<bits/stdc++.h>
using namespace std;
int TongChuSo (int value)
{
	int tong=0;
	while (value)
	{
		int nguyen = value/10;
		int du = value%10;
		value=nguyen;
		tong+=du;
	}
	return tong;
}
bool SoSanh (int value1, int value2)
{
	bool verify = false;
	if (TongChuSo(value1) < TongChuSo(value2)) verify = true;
	else if (TongChuSo(value1) == TongChuSo(value2) && value1 < value2) verify = true;
	return verify;
}
int main()
{
	int A[] = {13, 20, 4, 7};
	int n = sizeof(A)/sizeof(int);
	sort(A, A+n-1, SoSanh);
	foreach (int x in A) cout<<x<<" ";
}


