#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

bool cmp_by_value(const pair<char, int>& lhs, const pair<char, int>& rhs) {
	if(lhs.second == rhs.second)
		return lhs.first > rhs.first;
	else
  		return lhs.second < rhs.second;
}

int main(){
	char in[1001];
	//freopen("in.txt", "r", stdin);
	int fuck_you_blank = 0;
	
	while(gets(in)){
		if(fuck_you_blank > 0)
			cout << endl;
		map<char, int> chartoint;
		int one = 1;
		for(int i = 0; in[i] != '\0'; i++){
			if(chartoint.find(in[i]) == chartoint.end()) //如果是第一次出現 
				chartoint.insert(make_pair(in[i], one));
			else{
				chartoint.find(in[i]) -> second++;	//如果不是第一次出現,次數+1 
			}	
		}
		vector<pair<char,int> > vec(chartoint.begin(), chartoint.end());
		sort(vec.begin(), vec.end(), cmp_by_value);
		std::vector<pair<char, int> >::iterator it;
		for (it = vec.begin(); it != vec.end(); ++it){
      		cout << (int)it -> first << " " << it -> second << endl;
      	}
      	fuck_you_blank = 87;
	}
	return 0;	
}
