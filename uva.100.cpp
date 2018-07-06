#include <iostream> 

using namespace std;

int solve(int n, int count){
	if(n == 1)
		return count;
	else if( n % 2 == 1){
		count++;
		solve(3 * n + 1, count);
	}
	else{
		count++;
		solve(n / 2, count);
	}
}

int main() { 
    int a,b;
    while(cin >> a >> b){
    	bool change = false;
    	if(a > b){
    		change = true;
    		int temp = b;
    		b = a;
    		a = temp;
    	}
    	int max = 0;
    	for(int i = a; i <= b; i++){
    		int temp = solve(i, 1);
    		if(temp > max)
    			max = temp;
		}
		if(change)
			cout << b << " " << a << " " << max << endl;
		else
			cout << a << " " << b << " " << max << endl;
	}
	return 0;
}
