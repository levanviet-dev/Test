#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
	int d=0;
	while(n>0)
	{
		d += n%10;
		n /=10;
	}
	return d;
}
void sapxep(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	  for(int j=i+1;j<n;j++)
	    if(sum(a[i])>sum(a[j]) || ( sum(a[i])==sum(a[j]) && (a[i]>a[j] )  )     )
	  	{
		  	swap(a[i],a[j]);	  	
	  	}
	  	
	  	for(int i=0;i<n;i++)
	  	{
	  		cout<<"  "<<a[i];
	  	}	
	}
int main()
{
	int n,a[100];
	cout<<"nhap so phan tu cua mang :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	sapxep(a,n);

}


