#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std; 
string expand(string s,int begin,int end){
	while (begin >= 0 && end <= s.size()-1 && s[begin] == s[end]){
		begin--; 
		end++;  
	}
	return s.substr(begin+1,end-begin-1);  
}
int solution(string s){
	int ret = 0;  
	if (s.size() <= 1) return s.size(); 
	for (int i = 0; i < s.size(); i++){
		string temp = expand(s,i,i); // odd length string
		ret = max(ret,(int)temp.size());  
		if (i+1 < s.size() && s[i] == s[i+1]){
			temp = expand(s,i,i+1); // even length string 
			ret = max(ret,(int)temp.size());  	
		}
	}
	return ret; 
}
int main(){
	string s; 
	cin >> s; 
	cout << solution(s) << endl; 
	return 0;  
}
