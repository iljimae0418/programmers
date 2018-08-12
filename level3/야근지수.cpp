//O(nlog|works|)
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector> 
#include <queue>  
using namespace std; 
long long solution(int n,vector<int> works){
	long long ans = 0; 
	priority_queue<long long,vector<long long>, less<long long> > pq;  
	for (int i = 0; i < works.size(); i++){
		pq.push((long long)works[i]); 
	}
	while (n){
		long long k = pq.top(); pq.pop();  
		if (k > 0) k--;  
		pq.push(k);  
		n--;   
	}
	while (!pq.empty()){
		long long k = pq.top(); pq.pop(); 
		ans += k*k;  
	}
	return ans; 
}
