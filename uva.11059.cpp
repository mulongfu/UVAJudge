#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
	int n, id = 1;
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	while(scanf("%d", &n) != EOF){
		long long max = 0;
		vector<int> input;
		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			input.push_back(temp);
		}
		long long temp_pro;
		for(int i = 0; i < input.size(); i++){
			temp_pro = input[i];
			if(input[i] > max)
				max = input[i];
			for(int j = i + 1; j < input.size(); j++){
				temp_pro = temp_pro * input[j];
				if(temp_pro > max){
					max = temp_pro;
				}
			}
		}
		
		if(max > 0)
			cout << "Case #" << id << ": The maximum product is "<< max << "." << endl << endl; 
		else
			cout << "Case #" << id << ": The maximum product is "<< 0 << "." << endl << endl;
		id++;
	}
	return 0;
}
