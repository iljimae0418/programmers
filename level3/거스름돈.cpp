#include <iostream>
#include <cstdlib>
#include <cstring> 
#include <algorithm>
#include <vector> 
using namespace std; 
int dp[100005]; 
const int mod = 1e9+7; 
int solution(int n,vector<int> money){
	dp[0] = 1; 
	for (int i = 0; i < money.size(); i++){
		for (int j = money[i]; j <= n; j++){
			dp[j] += dp[j-money[i]]; 
			dp[j] %= mod;  
		}
	}
	return dp[n]; 
}
