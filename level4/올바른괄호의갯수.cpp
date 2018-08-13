#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

long long binom[30][30]; 
void calc(){
    for (int i = 1; i < 30; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || i == j) binom[i][j] = 1LL;  
            else binom[i][j] = binom[i-1][j-1]+binom[i-1][j];  
        }
    }
}
long long solve(int k){
    return (binom[2*k][k]/(k+1));  
}
long long solution(int n) {
    calc(); // fill binom table 
    return solve(n);   
}
