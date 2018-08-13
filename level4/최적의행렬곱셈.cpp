#include <string>
#include <iostream> 
#include <vector>
#include <algorithm>
#include <cstring> 
using namespace std;
int a[202][2]; 
int cache[202][202];  
const int INF = 987654321; 
int solve(int l,int r){
    if (l >= r) return 0; 
    int &ret = cache[l][r]; 
    if (ret != -1) return ret; 
    ret = INF;  
    for (int i = l; i < r; i++){
        ret = min(ret,solve(l,i)+solve(i+1,r)+a[l][0]*a[i][1]*a[r][1]);  
    }
    return ret; 
}
int solution(vector<vector<int>> matrix_sizes) {
    for (int i = 0; i < matrix_sizes.size(); i++){
        vector<int> x = matrix_sizes[i]; 
        a[i][0] = x[0];  
        a[i][1] = x[1]; 
    }
    memset(cache,-1,sizeof(cache)); 
    return solve(0,matrix_sizes.size()-1);  
}
