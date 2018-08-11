#include <string>
#include <vector>
#include <cstring> 

using namespace std;
const int mod = 1e9+7;  
int solution(int n) {
    int answer = 0;
    int f[60006];  
    memset(f,0,sizeof(f));  
    f[0] = 0; 
    f[1] = 1; 
    f[2] = 2; 
    for (int i = 3; i <= n; i++){
        f[i] = (f[i-1]%mod + f[i-2]%mod)%mod; 
    }
    return f[n];  
}
