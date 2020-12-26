/*
Bài 10. Cho m?t m?ng các s? nguyên arr và m?t s? nguyên d??ng k. Hãy vi?t hàm tr? v? các ph?n t? âm ??u tiên trong c?a s? k. N?u không t?n t?i s? âm nào output 0.
Ví d?:
o	V?i arr = [-8, 2, 3, -6, 10], k = 2 thì các c?a s? l?n l??t ch?a các giá tr?: [-8, 2], [2, 3], [3, -6], [-6, 10] nên k?t qu? tr? v? s? có d?ng firstNegative(arr, k) = [-8, 0, -6, -6]
*/
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
queue<int> firstNegative(vector<int> v, int k)
{
	queue<int> Que;
	int t=0;
	for(int i=0;i<v.size()-k+1;i++)
	{
	   
	   for(int j=i;j<i+k;j++)
	   {
	   	if(v[j]<0)
	   	{
	   		Que.push(v[j]);
	   		break;
		   }
		else 
		t++;
	   }
	   if(t==k)
	   {
	   	  Que.push(0);
	   }
	}
	return Que;
}
int main()
{
  int k=2;
  vector<int> v= {-8, 2, 3, -6, 10};
  queue<int> Que= firstNegative(v,k);
  while(!Que.empty())
{
	cout<<Que.front()<<" ";
	Que.pop();
   }   
}


