#include<bits/stdc++.h>
using namespace std;
#ifndef __heap__cpp__
#define __heap__cpp__
template <class T>
class Priority_queue
{
	int n;
	T A[1000];
	public:
	Priority_queue() {n=0;}
	int size() {return n;}

	void push(T x)
	{
	    int i = n;
		n++;
	    A[i] = x;
	    while(i > 0 && A[i] > A[(i-1)/2])
	    {
	        swap(A[(i-1)/2], A[i]);
	        i = (i-1)/2;
	    }
	}
	
	void heapify(T A[], int i) {
	    int largest; /* The index of largest elements between: current node
	                         left child node, and right child node */
	    int left = 2 * i + 1; /* The index of left child node */
	    int right = 2 * i + 2; /* The index of right child node */
	    if (left < n && A[left] > A[i]) /* N is the number of elements, global variable */
	        largest = left;
	    else
	        largest = i;
	    if (right < n && A[right] > A[largest])
	        largest = right;
	    if (largest != i) {
	        swap(A[i], A[largest]); /* Swap two elements if 
	                                   the value of parent node is less than and equal to the value of child node */
	        heapify(A, largest); /* Call recursively at new index */
	    }
	}
	
	T &top() {
		return A[0];
	}
	
	void pop()
	{
	    if(n == 0) cout<< "Hang doi rong";
	    
	    swap(A[n], A[0]); 
	    n--;
	    heapify(A, 0);
	}
};

int main()
{
	int a[] = {4,7,2,8,1,6,9,3,5};
	Priority_queue<int> Q;
	for(auto x:a) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}

#endif
