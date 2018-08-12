#include <string>
#include <vector>

using namespace std;
const int mod = 1e9+7; 
long long f[5005],g[5005]; 
int solution(int n) {
    int answer = 0;
    f[1] = 0;  
    g[1] = 1;  
    f[2] = 3;
    g[2] = 0;
    for (int i = 3; i <= n; i++){
        g[i] = (f[i-1]+g[i-2]);  
        f[i] = (f[i-2]+2*g[i-1]);  
        g[i] %= mod; 
        f[i] %= mod; 
    }
    return answer = f[n];
}
