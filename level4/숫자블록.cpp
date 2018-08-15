#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long begin, long long end) {
    vector<int> answer;
    for (long long i = begin; i <= end; i++){
        int best = 0; 
        for (long long j = 1; j*j <= i; j++){
            if (j > 1 && i%j == 0){
                best = max(best,(int)max(j,i/j)); 
                break; 
            }else if (j == 1 && i > 1){
                best = max(best,1); 
            }
        }
        answer.push_back(best);  
    }
    return answer;
}
