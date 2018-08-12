#include <string>
#include <vector>

using namespace std;
void hanoi(vector< vector<int> > &ans,int n,int from,int aux,int to){
    if (n == 1){
        vector<int> v; 
        v.push_back(from); 
        v.push_back(to);  
        ans.push_back(v);  
        return; 
    }
    hanoi(ans,n-1,from,to,aux);  
    // move largest to the destination  
    vector<int> v; 
    v.push_back(from); 
    v.push_back(to); 
    ans.push_back(v);  
    hanoi(ans,n-1,aux,from,to);  
}
vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    int from = 1, aux = 2, to = 3;  
    hanoi(answer,n,from,aux,to);  
    return answer;
}
