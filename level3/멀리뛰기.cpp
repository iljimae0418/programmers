#include <string>
#include <vector>

using namespace std;
long long dp[2002]; 
const long long mod = 1234567;  
long long solution(int n) {
    long long answer = 0;
    dp[1] = 1;  
    dp[2] = 2; 
    for (int i = 3; i <= n; i++){
        dp[i] = (dp[i-1]%mod + dp[i-2]%mod)%mod; 
    }
    return answer = dp[n];
}
