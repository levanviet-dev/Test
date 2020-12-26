#include <bits/stdc++.h> 
using namespace std; 
  
// Dinh nghia toan tu so sanh hai toa do
class comp { 
  
public: 
    bool operator()(pair<int, int> a, 
                    pair<int, int> b) 
    { 
        int x1 = a.first * a.first; 
        int y1 = a.second * a.second; 
        int x2 = b.first * b.first; 
        int y2 = b.second * b.second; 

        return (x1 + y1) > (x2 + y2); 
    } 
}; 
  
// Function to find the K closest points 
void kClosestPoints(int x[], int y[], 
                    int n, int k) 
{ 
    // Create a priority queue 
    priority_queue<pair<int, int>, 
                   vector<pair<int, int>>, comp> pq; 
  
    // Pushing all the points in the queue 
    for (int i = 0; i < n; i++) { 
        pq.push(make_pair(x[i], y[i])); 
    } 
  
    // Print the first K elements of the queue 
    for (int i = 0; i < k; i++) { 
  
        // Store the top of the queue in a temporary pair 
        pair<int, int> p = pq.top(); 
  
        // Print the first (x) and second (y) of pair 
        cout << p.first << " "
             << p.second << endl; 
  
        // Remove top element of priority queue 
        pq.pop(); 
    } 
} 
  
// Driver code 
int main() 
{ 
    // x coordinate of points 
    int x[] = { 1, -2 }; 
    // y coordinate of points 
    int y[] = { 3, 2 }; 
    int K = 1;
    int n = sizeof(x) / sizeof(x[0]); 
    kClosestPoints(x, y, n, K); 
  
    return 0; 
} 

