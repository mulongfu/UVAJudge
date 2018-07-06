#include <iostream>
#include <string>
using namespace std;

int reverse_int(int n){
	int result = 0, remainder;
	while(n != 0){
        remainder = n % 10;
        result = result * 10 + remainder;
        n /= 10;
    }
    return result;
}

bool judge(string str){
	string::iterator st = str.begin();
	string::reverse_iterator en = str.rbegin();
	for(int i = 0; i != str.size() / 2; i++, st++, en++){
		if(*st != *en)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			bool test = false;
			int counter = 0;
			long long result = 0;
			string input;
			cin >> input;
			result = stoi(input);
			while(!test){
				counter++;
				result = result + reverse_int(result);
				test = judge(to_string(result));
			}
			cout << counter << " " << result << endl;
		}
	}
	
	return 0;
}
