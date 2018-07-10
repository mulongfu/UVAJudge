#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int groups;
	string s;
	while(cin >> groups >> s){
		if(groups == 0)
			return 0;
		else{
			int each_group_contain = s.size() / groups;
			string temp(s);
			int totalsize = 0, index = 1, in = 0;
			while(totalsize < s.size()){
				int counter = each_group_contain;
				in = each_group_contain * index - 1;
				for(counter; counter > 0; counter--){
					temp[totalsize] = s[in];
					totalsize++;
					in--;		
				}
				index++;
			}
			
			for(int i = 0; i < temp.size(); i++){
				cout << temp[i];
			}
			cout << endl;
		}
	} 
	return 0;
}
