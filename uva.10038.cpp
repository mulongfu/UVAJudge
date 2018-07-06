#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main(){
	int n;
    while(cin >> n){
    	int input[3001];
		map<int, bool> match;
    	bool find = true;
    	for(int i = 1; i <= n - 1; i++){
    		match.insert(pair<int, bool>(i, false));
		}
				
		for(int i = 0; i < n; i++){
    		cin >> input[i];
		}
		
		for(int i = 0; i < n - 1; i++){
			map<int, bool>::iterator it = match.find(abs(input[i] - input[i+1]));
    		if(it != match.end()){
    			it->second = true;
			}
		}
		
		/*
		for(map<int, bool>::iterator i = match.begin(); i != match.end(); i++) {
    		cout << i->first << i->second << endl;
		}*/
		
		for(map<int, bool>::iterator i = match.begin(); i != match.end(); i++) {
    		if(i->second == false){
    			cout << "Not jolly" << endl;
    			find = false;
    			break;
    		}
		}
		if(find)
			cout << "Jolly" << endl;
	}
	return 0;
}
