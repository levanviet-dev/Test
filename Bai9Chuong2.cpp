#include<bits/stdc++.h>
#include<queue>
using namespace std;

bool isPrime(int n)
{
	if(n<2)	return false;
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
			return true;
		
	}

int main()
{
 int n=30;
 int m,i;
 queue<int> q;
 for(int i=2;i<=n,i<10;i++)
 {
 	if(isPrime(i))
 	{
 		q.push(i);
 		}
 	}
 	while(!q.empty())
{
	for(i=1;i<=9;i++)
	{
		int m=q.front()*10+i;
		if(m<=n && isPrime(m)){
			q.push(q.front()*10+i);
			}
			}
			cout<<q.front()<<" ";
			q.pop();
	}
	return 0;
}


