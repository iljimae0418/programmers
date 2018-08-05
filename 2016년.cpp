#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std; 
int days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31}; 
string ans[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};  
string solution(int a,int b){
	int cur_m = 1, cur_day = 5; // initially friday 
	while (cur_m < a){
		int move = days[cur_m]-29; 
		cur_day = (cur_day+move+1)%7;  
		cur_m++; 
	}
	int cur_date = 1;  
	while (cur_date < b){
		if (cur_date + 7 <= b){
			cur_date += 7; 
		}else if (cur_date + 7 > b){
			int diff = b-cur_date; 
			cur_day = (cur_day+diff)%7; 
			cur_date += diff;  
		}
	}	
	return ans[cur_day]; 
}
