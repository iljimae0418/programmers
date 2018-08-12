#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector> 
using namespace std; 
long long fact[22];  
vector<int> solution(int n,long long k){
	k--;  
	vector<int> v,ret; 
	for (int i = 1; i <= n; i++){
		v.push_back(i); 
	}
	fact[0] = fact[1] = 1LL;  
	for (long long i = 2; i <= n; i++){
		fact[i] = fact[i-1]*i; 
	}
	long long chk = fact[n]; 
	for (int i = 0; i < n; i++){
		chk /= (n-i); 
		int idx = k/chk;  
		ret.push_back(v[idx]); 
		k %= chk;  
		v.erase(v.begin()+idx); 
	}
	return ret;  
}
int main(){
	int n; 
	long long k; 	
	cin >> n >> k;  
	vector<int> ans = solution(n,k); 
	for (int i = 0; i < ans.size(); i++){
		cout << ans[i] << " "; 
	}
	cout << endl; 
	return 0; 
}
