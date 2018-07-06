#include <iostream>
#include <string>
using namespace std;

int calc(int n){
	if( n >= 0 && n <= 9)
		return n;
	else
		return (n / 10) + (n - 10);
}

int main(){
	int n;
	while(cin	 >> n){
		string f, s, t, fo;
		int even_sum, odd_sum, result;
		for(int i = 0; i < n; i++){
			cin >> f >> s >> t >> fo;
			even_sum = calc((f[0] - '0') * 2) + calc((f[2] - '0') * 2) + calc((s[0] - '0') * 2) +
					   calc((s[2] - '0') * 2) + calc((t[0] - '0') * 2) + calc((t[2] - '0') * 2) +
					   calc((fo[0] - '0') * 2) + calc((fo[2] - '0') * 2);
			odd_sum = f[1] - '0' + f[3] - '0' + s[1] - '0' + s[3] - '0' + 
					  t[1] - '0' + t[3] - '0' + fo[1] - '0' + fo[3] - '0';
			result = even_sum + odd_sum;
			if(result % 10 == 0)
				cout << "Valid" << endl;
			else
				cout << "Invalid" << endl;
			}
	}
	return 0;
}
