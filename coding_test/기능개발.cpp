#include <string>
#include <iostream> 
#include <vector>
#include <queue> 
#include <stack> 
#include <algorithm> 

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days_left_ordered;  
    queue<int> q; 
    for (int i = 0; i < progresses.size(); i++){
        int left = (100-progresses[i]); 
        int days = (left+speeds[i]-1)/speeds[i];  
        days_left_ordered.push_back(days);  
        q.push(days); 
    }
    int previous = -1;  
    for (int i = 0; i < days_left_ordered.size(); i++){
        int cur = days_left_ordered[i];    
        int cnt = 0;  
        if (previous != -1 && previous >= cur){  
            continue; 
        }
        while (!q.empty() && q.front() <= cur){ 
            q.pop(); 
            cnt++;  
        }
        previous = cur; 
        answer.push_back(cnt);  
    }
    return answer;
}
